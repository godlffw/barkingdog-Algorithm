#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;
    vector <int> arr(num);
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int cnt = 0;
    for (const auto& kv : arr)  {
        if (kv == target) cnt++;
    }
    cout << cnt;
    
}
