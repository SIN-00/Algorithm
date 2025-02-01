#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, ret, temp;
int cnt = 0;
string s;

int factorial(int n){
    int res = 1;
    if(n == 0) return 1;
    else{
        for(int i = 1; i <= n; i++){
            res *= i;
            if(res%10 == 0){ 
                res /= 10;
                cnt++;
            }
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        cnt = 0;
        ret = factorial(n);
        cout << cnt << "\n";
    }

}