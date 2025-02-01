#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        int cnt = 0;
        while(n >= 5){
            cnt += n/5; 
            n = n/5;
            
        }
        cout << cnt << "\n";
    }
}