#include <iostream>
#include <stack>
#include <string>


using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> stk;
    while(n--) {
        string cmd;
        cin >> cmd;
        if (cmd[0] == 'p') { 
            if(cmd[1] == 'u') { //push
                int n;
                cin >> n;
                stk.push(n);
            }
            else { // pop
                if(stk.empty()) cout << -1; 
                else {
                    cout << stk.top();
                    stk.pop();
                }
            }
        }
        else if (cmd[0] == 's') {
            cout << stk.size();
        }
        else if (cmd[0] == 't') {
            if (!stk.empty()) cout << stk.top();
            else cout << -1;
        }
        else { //empty
            if (stk.empty()) cout << 1;
            else cout << 0;
        }
        cout << "\n";
        
    }
}
