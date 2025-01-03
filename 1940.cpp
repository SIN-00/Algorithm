#include <bits/stdc++.h>
using namespace std;

int N,M;

int main(){

    cin >> N;
    cin >> M;
    int ary[N];
    int cnt=0;
    for(int i = 0; i < N; i++){
        cin >> ary[i]; 
    }
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            
            if(ary[i]+ary[j]==M) cnt++;
        }
    }

    cout << cnt << endl;

}