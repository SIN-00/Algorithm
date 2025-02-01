/*
종화는 21세기 유명한 방구쟁이다. 종화는 방구를 낄 때 "이러다... 다 죽어!!" 를 외치며
방구를 뀌는데 이렇게 방귀를 뀌었을 때  방귀는 상하좌우 네방향으로 뻗어나가며 종화와 연결된 "육지"는 모두 다 오염된다. 
"바다"로는 방구가 갈 수 없다. 맵이 주어졌을 때 종화가 "이러다... 다 죽어!!"를 
"최소한" 몇 번외쳐야 모든 육지를 오염시킬 수 있는지 말해보자. 1은 육지며 0은 바다를 가리킨다. 
[출처] [알고리즘 강의] 2주차. 그래프이론, 인접행렬, 인접리스트, DFS, BFS, 트리순회|작성자 큰돌
*/

//connected compon ent 찾는 문제
#include <bits/stdc++.h>
using namespace std;

int N, M, ny,nx;
int cnt = 0;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int adj[104][104];
bool visited[104][104];

//2차원 좌표일때
void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || ny >= M || nx < 0 || nx >= N) continue;
        if(adj[ny][nx] == 1 && !visited[ny][nx]){
            dfs(ny,nx);
        }      
    }

    return;
}


int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> adj[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(adj[i][j] == 1 && !visited[i][j]){
                cnt++; dfs(i,j);
            }
        }
    }
    cout << cnt;

    return 0;
}