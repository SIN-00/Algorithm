#include <bits/stdc++.h>
using namespace std;

//1. 벽 세개를 세우는 모든 경우의수를 판단해야된다.
//2. dfs써야겠다.

int adj[10][10];
int visited[10][10];
vector<pair<int,int>> virusList, wallList;
int N,M, ret;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny >= N || nx >= M || ny < 0 || nx < 0|| visited[ny][nx] == 1|| adj[ny][nx] == 1) continue;
        else {
            dfs(ny,nx);
        }
    }
}
//벽은 세웠어. 바이러스만 퍼뜨려 그다음 0개수세는건 쉬울거같음 ㅇㅈ?
//virsuList에 있는것들을 기준으로 각각 dfs끝날때까지 2로만들고 끝내벅리면 될듯 ㅇㅈ?
int solve(){
    int zero = 0;
    fill(&visited[0][0], &visited[0][0] + 10 * 10, 0); 
    for(int i = 0; i < virusList.size(); i++){
        int y = virusList[i].first;
        int x = virusList[i].second;
        dfs(y,x);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(adj[i][j] == 0 && !visited[i][j]) zero++;
        }
    }
    return zero;
}
int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> adj[i][j];
            if(adj[i][j] == 2) virusList.push_back({i,j});
            if(adj[i][j] == 0) wallList.push_back({i,j});
        }
    }
    //3개를 무작위로하잖아요? 그러면 로직이있어요
    for(int i = 0; i < wallList.size(); i++){
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
                adj[wallList[i].first][wallList[i].second] = 1;
                adj[wallList[j].first][wallList[j].second] = 1;
                adj[wallList[k].first][wallList[k].second] = 1;
                //dfs로직돌리면서 바이러스 퍼뜨리고 0개수 파악
                ret = max(ret,solve());
                adj[wallList[i].first][wallList[i].second] = 0;
                adj[wallList[j].first][wallList[j].second] = 0;
                adj[wallList[k].first][wallList[k].second] = 0;
            }
        }
    }
    cout << ret;


    return 0;
}
