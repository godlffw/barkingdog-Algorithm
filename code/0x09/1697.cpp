#include <bits/stdc++.h>


using namespace std;

int board[200002];
int dx[2] = {-1,1};

int main() {
    int n, k;
    cin >> n >> k;
    fill(&board, &board + 200002, -1);
    if (n == k) {
        cout << 0;
        return 0;
    }
    queue<int> que;
    board[n] = 0;
    board[k] = -2;
    que.push(n);
    while(!que.empty()) {
        int cur = que.front();
        que.pop();
        for (int i = 0; i < 2; i++) {
            int x = cur + dx[i];
            if (x < 0 || x >= 200002) continue;
            if (board[x] == -2) {
                cout << board[cur] + 1;
                return 0;
            }
            if (board[x] != -1) continue;
            board[x] = board[cur] + 1;
            que.push(x);
        }
        int telpo = cur * 2;
        if (telpo < 0 || telpo >= 200002) continue;
        if (board[telpo] == -2 ) {
            cout << board[cur] + 1;
            return 0;
        }
        if (board[telpo] != -1) continue;
        board[telpo] = board[cur] + 1;
        que.push(telpo);
    }
    
}
