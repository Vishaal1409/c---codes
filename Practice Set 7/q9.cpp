#include <iostream>
#include <queue> 
#include <vector>
#include <algorithm>

using namespace std;


class MedianFinder {
private:
    
    priority_queue<int> max_heap;

   
    priority_queue<int, vector<int>, greater<int>> min_heap;

public:
    MedianFinder() {}

    void addNum(int num) {
  
        max_heap.push(num);

        if (!max_heap.empty() && !min_heap.empty() && max_heap.top() > min_heap.top()) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }

        if (max_heap.size() > min_heap.size() + 1) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
      
        else if (min_heap.size() > max_heap.size()) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }

    double findMedian() {
        if (max_heap.empty()) return 0.0; 

       
        if (max_heap.size() > min_heap.size()) {
            return (double)max_heap.top();
        }
      
        else {
            return (max_heap.top() + min_heap.top()) / 2.0;
        }
    }
};

int main() {
    MedianFinder mf;
    mf.addNum(1);
    cout << "Median after 1: " << mf.findMedian() << endl; 
    mf.addNum(2);
    cout << "Median after 2: " << mf.findMedian() << endl; 
    mf.addNum(3);
    cout << "Median after 3: " << mf.findMedian() << endl; 
    mf.addNum(4);
    cout << "Median after 4: " << mf.findMedian() << endl;
    mf.addNum(5);
    cout << "Median after 5: " << mf.findMedian() << endl;

    return 0;
}