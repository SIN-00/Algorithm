#include <bits/stdc++.h>
using namespace std;

int n;
string ps;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        stack<char> stk;
        cin >> ps;

        for(int j = 0; j < ps.length(); j++ ){  // 마지막 문자까지 확인하도록 수정
            if(ps[j] == ')' && !stk.empty() && stk.top() == '(') stk.pop();  
            else stk.push(ps[j]);  
        }

        if(stk.empty()) cout << "YES" << "\n";  // 스택이 비어 있으면 올바른 괄호
        else cout << "NO" << "\n"; 
    }
}
