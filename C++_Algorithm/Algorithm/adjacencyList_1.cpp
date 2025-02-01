#include <bits/stdc++.h>
using namespace std;

const int V = 10;  // 정점의 최대 개수
vector<int> adj[V];
int visited[V];

void go(int from) {
    visited[from] = 1;  // 현재 노드를 방문 처리
    cout << from << "\n";
    for (int there : adj[from]) {  // 연결된 모든 노드 탐색
        if (!visited[there]) {
            go(there);  // 방문하지 않은 노드로 이동
        }
    }
}

int main() {
    // 그래프 초기화
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(3);
    
    // 모든 정점에 대해 DFS 실행
    for (int i = 0; i < V; i++) {
        if (!visited[i] && !adj[i].empty()) {  // 방문하지 않은 노드에 대해 DFS 실행
            go(i);
        }
    }
    return 0;
}
