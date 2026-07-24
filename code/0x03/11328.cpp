#include <bits/stdc++.h>
using namespace std;

int check(string a, string b) {
    if (a.length() != b.length()) return 0;
    vector<char> arr1(a.length());
    vector<char> arr2(b.length());

    for (int i = 0; i < a.length(); i++) {
        arr1[i] = a[i];
        arr2[i] = b[i];
    }

    for (const auto& kv : arr1) {
        if (find(arr2.begin(), arr2.end(), kv) == arr2.end()) return 0;
        else {
            arr2[find(arr2.begin(),arr2.end(),kv) - arr2.begin()] = 0;
        }
    }
    for (const auto& kv : arr2) {
        if (kv != 0) return 0;
    }
    return 1;

} 

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a,b;
        cin >> a >> b;
        if (check(a,b)) {cout << "Possible\n";}
        else cout << "Impossible\n";
    }
}
