#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string input;
int cnt[26];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> input;
    for(char a : input){
        cnt[a-'a']++;
    }
    for(int i = 0; i < 26; i++) cout << cnt[i] << " ";

    return 0;
}

//counting을 할때는 맵 또는 배열 
