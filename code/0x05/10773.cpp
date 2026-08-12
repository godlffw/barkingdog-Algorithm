#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stk;
    int n;
    cin >> n;
    int ans = 0;
    while(n--) {
        int m;
        cin >> m;
        if (m == 0) {
            if (!stk.empty()) {
                ans -= stk.top();
                stk.pop();
            }
            else {
                continue;
            }
        }
        else {
            stk.push(m);
            ans += m;
        }
    }
    cout << ans;
}
