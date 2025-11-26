#include <iostream>
#include <list>          
#include <unordered_map>
#include <algorithm>

using namespace std;


class LRUCache {
private:
    int capacity;

    list<pair<int, int>> dll; 

    unordered_map<int, list<pair<int, int>>::iterator> cache_map; 

public:
    LRUCache(int cap) : capacity(cap) {}

    int get(int key) {
        if (cache_map.find(key) == cache_map.end()) {
            return -1; 
        }

        auto it = cache_map[key];
        int value = it->second; 

        pair<int, int> temp_data = *it;
        dll.erase(it);
        dll.push_front(temp_data);
        cache_map[key] = dll.begin();

        return value;
    }

    void put(int key, int value) {

        if (cache_map.count(key)) {
         
            dll.erase(cache_map[key]);
            cache_map.erase(key); 
        }
        
        if (dll.size() == capacity) {

            int lru_key = dll.back().first;
         
            dll.pop_back();
          
            cache_map.erase(lru_key);
        }

        dll.push_front({key, value});
        cache_map[key] = dll.begin();
    }
};

int main() {
    LRUCache cache(2);

    cache.put(1, 10);      
    cache.put(2, 20);     
    cout << "Get 1: " << cache.get(1) << endl; 
    cache.put(3, 30);      
    cout << "Get 2: " << cache.get(2) << endl; 
    cache.put(4, 40);     
    cout << "Get 3: " << cache.get(3) << endl; 
    cout << "Get 4: " << cache.get(4) << endl; 

    return 0;
}