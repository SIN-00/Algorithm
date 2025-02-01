#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int cnt = 0;
    int i = 0;
    cin >> n;
    while(true){
        i++;
        if(to_string(i).find("666")!= string::npos){
            cnt++;
            if(cnt == n){
                cout << i;
                break;
            }   
        }
    }

    return 0;
}