#include <iostream>
#include <string>
#include <deque> 

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> deq;
    
    while(n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push_front") {
            int x;
            cin >> x;
            deq.push_front(x);
        }
        else if (cmd == "push_back") {
            int x ;
            cin >> x;
            deq.push_back(x);
        }
        else if (cmd == "pop_front") {
            if (deq.empty()) cout << -1;
            else {
                cout << deq.front();
                deq.pop_front();
            }
        }
        else if (cmd == "pop_back") {
            if (deq.empty()) cout << -1;
            else {
                cout << deq.back();
                deq.pop_back();
            }
        }
        else if (cmd == "size") {
            cout << deq.size();
        }
        else if (cmd == "empty") {
            cout << deq.empty();
        }
        else if (cmd == "front") {
            if (deq.empty()) cout << -1;
            else cout << deq.front();
        }
        else {
            if (deq.empty()) cout << -1;
            else cout << deq.back();
        }
        cout << "\n";
    }
}
