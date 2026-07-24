#include <bits/stdc++.h>
using namespace std;
int main() {
    int num_arr[10] = {};
    int a,b,c;

    cin >> a >> b >> c; 
    a *= b * c;
    
    while(a != 0) {
        num_arr[a % 10]++;
        a /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        cout << num_arr[i] << "\n";
    }
}
