#include<bits/stdc++.h>
using namespace std;

const int n = 6;
vector<int> adj[n];
int visited[n];


void dfs(int v){
    visited[v] = 1;
    cout << v << "\n";
    for(int u : adj[v]){
        if(visited[u] == 1) continue;
        dfs(u);
    }
    cout << v << "로부터 시작된 함수가 종료되었습니다.\n";
    return;
}
/* 못먹어도 Go
void dfs(int here){
    if(visited[there]) return;
    visited[here] = 1;
    for(int there : adj[here]){
        dfs(here);    
    }
}
*/

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3); 
    adj[2].push_back(4);  
    adj[4].push_back(2);  
    adj[2].push_back(5);   
    dfs(1);

}