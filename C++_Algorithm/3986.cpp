#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    
    int cnt = 0;
    string word;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> word;
        stack<char> stk;
        for(char c : word){

            if(stk.size() && stk.top() == c) stk.pop();
            else stk.push(c);
        }
        if(stk.size() == 0) cnt ++;
    }

    cout << cnt;


}