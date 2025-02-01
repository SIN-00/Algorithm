#include <bits/stdc++.h>
using namespace std;

int h,w;

int main(){
    cin >> h >> w;
    char ary[h][w];
    int res[h][w];
    int flag;
    for(int i = 0; i < h; i++){
        flag = INT16_MAX;
        for(int j = 0; j < w; j++){
            cin >> ary[i][j];
            if(ary[i][j] == 'c') {res[i][j] = 0; flag = j;}
            else {
                if(j-flag > 0){
                    res[i][j] = j - flag;
                }else res[i][j] = -1;
            }
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}