#include <bits/stdc++.h>


using namespace std;

int main() {
    int arr[9] = {};
    int num;
    cin >> num;

    while (num != 0) {
        if (num % 10 == 9 || num % 10 == 6) {
            arr[6]++;
        }
        else {
            arr[num % 10]++;
        }

        num /= 10;
    }
    arr[6] = arr[6]/2 + arr[6]%2;
    cout << *max_element(arr, arr+9);
    
}
