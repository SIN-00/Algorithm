#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        string s;
        getline(cin, s);
        if(s == ".") break;
        stack<char> stk;

        for(char c : s){
            if(c == '(') stk.push(c);
            else if (c == '[') stk.push(c);
            else if(c == ')' && !stk.empty() && stk.top() == '(') stk.pop();
            else if(c == ')' && !stk.empty() && stk.top() == '[' || c == ')'&&stk.empty()) {stk.push(c); break;}
            else if (c == '[') stk.push(c);
            else if(c == ']' && !stk.empty() && stk.top() == '[') stk.pop();  
            else if(c == ']' && !stk.empty() && stk.top() == '('|| c == ']'&&stk.empty()){stk.push(c); break;}
        }
        if(s[0]==')' || s[0] == ']') {
                cout << "no" << "\n"; 
                continue;
            }
        if(stk.empty()) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}