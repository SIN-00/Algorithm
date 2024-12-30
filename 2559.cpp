#include <bits/stdc++.h>
using namespace std;

int N,K;

int main(){

    cin >> N >> K;
    int temp[N];
    int sum[N-K+1];
    for(int i = 0 ; i <= N-K; i++){
        sum[i] = 0;
    }
    int max = INT_MIN;
    for(int i = 0; i<N; i++){
        cin >> temp[i];
    }

    for(int i = 0; i <= N-K; i++){
        for(int j = 0; j < K; j++){
            sum[i] += temp[i+j];
        }
        if(sum[i]>=max) {
            max = sum[i];
        }
    }
    cout << max;

}