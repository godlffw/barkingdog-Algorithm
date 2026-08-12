#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> que;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }
    while(que.size() != 1) {
        que.pop();
        int tmp = que.front();
        que.pop();
        que.push(tmp);
    }
    cout << que.front();
    
}
