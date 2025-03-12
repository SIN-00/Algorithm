#include <bits/stdc++.h>
using namespace std;

int n,m, cnt, cnt2;
int adj[104][104];
int visited[104][104];
vector <pair<int,int>> v;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

void find(int y, int x){
    visited[y][x] = 1;
    if(adj[y][x] == 1){
        v.push_back({y,x});
        return;
    }
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])continue;
        find(ny,nx);
    }
}

//치즈가 모두 없어지는데 걸리는 시간, 모두 녹기 한 시간전 남아있는 치즈조각 칸개수
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> adj[i][j];
        }
    }
    while(true){
        fill(&visited[0][0], &visited[0][0] + 104*104, 0);
        v.clear();
        find(0,0);
        cnt2 = v.size();
        for(pair<int,int> b : v){
            adj[b.first][b.second] = 0;
        }
        bool flag = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(adj[i][j] != 0) flag =1;
            }
        }
        cnt++;
        if(!flag) break;

    }
    cout << cnt << "\n" << cnt2 << "\n";
    return 0;
}