#include <iostream>
#include <queue>
#define X first 
#define Y second

using namespace std;

int board[502][502];
bool vis[502][502];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int main() {
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j]; 
        }
    }
    int num = 0;
    int max = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!board[i][j] || vis[i][j]) continue;
            num++;
            //BFS 시작
            queue<pair<int,int>> que;
            vis[i][j] = true;
            que.push({i,j});
            int area = 0;
            while(!que.empty()) { //queue가 빌 때까지 상하좌우 확인하고 방문처리
                pair<int,int> cur = que.front();
                que.pop();
                area++; //방문점마다 면적 증가
                for (int dir = 0; i < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= n || ny <0 || ny >= m) continue;
                    if (vis[nx][ny] || !board[nx][ny]) continue;
                    vis[nx][ny] = 1;
                    que.push({nx,ny});
                }
            }
            if (area >= max ) max = area;

        }
    }
    cout << num << "\n" << max;
    




    

    
    
}
