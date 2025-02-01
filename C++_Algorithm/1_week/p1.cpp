#include <bits/stdc++.h>
using namespace std;

int main(){
    string dopa = "umzunsik";
    //Q1.앞에서부터 3개의 문자열을 출력하라
    string dopa2 = dopa.substr(0,3);
    cout << dopa2 << "\n";
    //Q2. 해당 문자열을 거꾸로 해서 출력하라
    reverse(dopa2.begin(), dopa2.end());
    cout << dopa2 << "\n";
    //Q3. 거꾸로된 해당 문자열 끝에 "umzunsik"이란 문자열을 추가하라
    dopa2 += "umzunsik";
    cout << dopa2 << "\n";
    return 0;
}