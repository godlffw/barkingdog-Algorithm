#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> que;
    while(n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int m;
            cin >> m;
            que.push(m);
        }
        else if (cmd == "pop") {
            if(!que.empty()) {
                cout << que.front();
                que.pop();
            }
            else cout << -1;
        }
        else if (cmd == "size") {
            cout << que.size();
        }
        else if (cmd == "front") {
            if (!que.empty()) cout << que.front();
            else cout << -1;
        }
        else if (cmd == "empty") {
            if (que.empty()) cout << 1;
            else cout << 0;
        }
        else {
            if (!que.empty()) cout << que.back();
            else cout << -1;
        }
        cout << "\n";
    }
    
    
}
