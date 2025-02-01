#include <bits/stdc++.h>
using namespace std;

string s, number;
vector<pair<int, string>> v;
vector<int> num;
int N, M, temp;
int main(){

    cin >> N;
    for(int i = 0; i < N; i++){
        bool prevAlpha = 0;
        bool prevZero = 1;
        number = "";
        cin >> s;
        cout << "\n";
        for(auto it : s){
            // cout << it << '\n';
            if(isdigit(it))//지금 숫자
            {
                if(prevZero == 1 && it == '0'){
                    prevAlpha = 0;
                    prevZero = 1;
                    continue;
                }
                if(prevZero == 0 && it == '0'){
                    prevZero = 1;
                }else prevZero = 0;   
                number += it;
                cout << "number : " << number << "\n";
                prevAlpha = 0;
                //전이 숫자고 지금은 알파벳
            }else if(prevAlpha == 1 && !isdigit(it)) {
                prevZero = 0;
                continue;
            }else if(!(isdigit(it))){
                temp = atoi(number.c_str()); //모아둔거 숫자로 전환
                cout << "temp : " << temp << "\n";
                num.push_back(temp);
                M++;
                prevAlpha = 1;
                number = "";
            } 
        }
        if (!number.empty()) {
            temp = atoi(number.c_str());
            num.push_back(temp);
        }

    }
    sort(num.begin(), num.end());
    for(int i = 0; i < M; i++){
        cout << "answer : " << num[i] << "\n";
    }

}