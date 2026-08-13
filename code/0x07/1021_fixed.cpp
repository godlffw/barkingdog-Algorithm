#include <iostream>
#include <deque>

using namespace std;

int main() {
    int size, n;
    cin >> size >> n;
    deque<int> deq;
    for (int i = 1; i <= size; i++) {
        deq.push_back(i);
    }
    int cnt = 0;
    while(n--) {
        int t;
        cin >> t;
        int idx = 0;
        for (int i : deq) {
            if (i == t) {
                break;
            }
            idx++;
        } 
    
        if (idx >= deq.size() - idx) { //2
            while(deq.front() != t) {
                int tmp = deq.front();
                deq.pop_front();
                deq.push_back(tmp);
                cnt++;
            }
        }
        else { //3
            while(deq.front() != t) {
                int tmp = deq.back();
                deq.pop_back();
                deq.push_front(tmp);
                cnt++;
            }
        }
        
        deq.pop_front();
        
    }
    cout << cnt;
}
