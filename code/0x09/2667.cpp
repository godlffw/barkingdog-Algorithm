#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int board[27][27];
int vis[27][27];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    vector<int> arr;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++ ){
            if (board[i][j] == 1 && !vis[i][j]) { //새로운 단지
                cnt++;
                int size = 1;
                queue<pair<int,int>> que;
                que.push({i,j});
                vis[i][j] = 1;
                while(!que.empty()) {
                   pair<int, int> cur = que.front();
                   que.pop();
                   for (int i = 0; i < 4; i++) {
                    int nx = cur.X + dx[i];
                    int ny = cur.Y + dy[i];
                    if (nx < 0 || nx >= n || ny <0 || ny >= n) continue;
                    if (vis[nx][ny] || !board[nx][ny]) continue;
                    vis[nx][ny] = 1;
                    que.push({nx,ny});
                    size++;
                   } 
                }
                arr.push_back(size);
            }
        }
    }
    cout << cnt << "\n";
    sort(arr.begin(), arr.end());
    for (int i : arr) {
        cout << i << "\n";
    }
}
