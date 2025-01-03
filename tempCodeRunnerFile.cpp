#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        int k = 1;
        int cnt = 1;
        while(k%n == 0){
            cnt ++;
            k = 10*k+1;
        }

        printf("%d\n", cnt);
    }

    return 0;
}