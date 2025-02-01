#include <bits/stdc++.h>
using namespace std;

int bucket, cnt, m, n, j, l, r, pos, ret;

int main() {
    cin >> n >> m >> j;
    l = 1;
    for(int i = 0; i < j; i++){
        cin >> pos;
        r = l + m - 1;
        if(pos >= l && pos <= r) continue;
        else if(pos < l){
            ret = l - pos;
            l = pos;
            cnt += ret;
        }else{
            ret = pos - r;
            l += ret;
            cnt += ret;
        }
    }
    cout << cnt;
}

