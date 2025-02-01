#include <bits/stdc++.h>
using namespace std;
int park[3];
int cnt[104];
int a,b;
int sum = 0;

int main(){

    for(int i = 0 ; i < 3; i++){
        cin >> park[i];
    }
    for(int i = 0 ; i < 3; i++){
        cin >> a >> b;
        for(int j = a ; j < b; j++){
            cnt[j]++;
        }
    }

    for(int i = 0 ; i < 100; i++)
    {
        if(cnt[i]==0) continue;
        else if (cnt[i]==1) sum += park[0];
        else if (cnt[i]==2) sum += park[1] * 2;
        else if (cnt[i]==3) sum += park[2] * 3;
    }
    cout << sum << '\n';



    return 0;
}