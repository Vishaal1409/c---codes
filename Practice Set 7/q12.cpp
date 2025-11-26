#include <iostream>
#include <vector>
#include <queue> 
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct CompareNodes {
    bool operator()(ListNode* a, ListNode* b) {
       
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
  
    priority_queue<ListNode*, vector<ListNode*>, CompareNodes> min_heap;

    for (ListNode* list : lists) {
        if (list != nullptr) {
            min_heap.push(list);
        }
    }

    ListNode dummy;
    ListNode* tail = &dummy;

    while (!min_heap.empty()) {
        ListNode* smallest = min_heap.top();
        min_heap.pop();

        tail->next = smallest;
        tail = tail->next; 

        if (smallest->next != nullptr) {
            min_heap.push(smallest->next);
        }
    }

    return dummy.next;
}
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << (head->next != nullptr ? " -> " : "");
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* l1 = new ListNode(1, new ListNode(4, new ListNode(5)));
    ListNode* l2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* l3 = new ListNode(2, new ListNode(6));

    vector<ListNode*> lists = {l1, l2, l3};

    ListNode* merged = mergeKLists(lists);

    cout << "Merged Sorted List:" << endl;
    printList(merged); 

    return 0;
}