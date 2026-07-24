#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    int arr[26] = {};
    for (char c : a) {arr[c-'a']++};
    for (char c : b) {arr[c-'a']--};
    int ans = 0;
    for (auto const& kv : arr) {
        if (kv < 0 ) ans += (-1)*kv;
        else ans+=kv;
    }
    cout << ans;
}
