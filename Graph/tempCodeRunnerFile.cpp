#include <bits/stdc++.h>
using namespace std;

//connected component구하면 되겠다. dfs로 풀어보자
int n, cnt, max_cnt, d;
int adj[101][101];
int visited[101][101];

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
void dfs(int y, int x, int d){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if(!visited[ny][nx] && adj[ny][nx] > d){
            dfs(ny,nx,d);
        }
    }
    return;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> adj[i][j];
        }
    }
    for(d = 1; d <= 100; d++){
        memset(visited, 0, sizeof(visited)); //초기화에 주의하자
        cnt = 0;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j] && adj[i][j] > d){
                    dfs(i,j,d);
                    cnt++;
                }
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt << "\n";

}