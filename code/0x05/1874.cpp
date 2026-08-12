#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> stk;
    int now = 1;
    vector<char> ans;
    while(n--) {
        int m;
        cin >> m;
        while(now <= m) {
            stk.push(now);
            ans.push_back('+');
            now++;
        }
        if (stk.top() == m && !stk.empty()) {
            stk.pop();
            ans.push_back('-');
        }   
        else {
            cout << "NO";
            break;
        }

    }
    for (char c : ans) {
        cout << c << "\n";
    }
}
