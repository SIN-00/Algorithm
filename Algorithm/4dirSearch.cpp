//2주차 맵과 방향벡터
//4가지 방향 탐색법

#include <bits/stdc++.h>
using namespace std;
const int dy[]  = {-1,0,1,0};
const int dx[]  = {0,1,0,-1};
int main(){

    int y = 0, x = 0;
    for(int i = 0; i < 4; i++ )
    {
        int ny = + dy[i];
        int nx = + dx[i];

        cout << ny << " : " << nx << "\n";
    }
    return 0;
}