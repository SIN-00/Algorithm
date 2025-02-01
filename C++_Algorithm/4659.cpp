#include<bits/stdc++.h>
using namespace std;

string pw;
char mo[5] = {'a','e','i','o','u'};
char temp;
int cnt, prevMo, prevJa, sameMo, sameJa, convert;
bool moeum, isValid;

bool isMo(char &a){
    for(int i = 0; i < 5; i++){
        if(a == mo[i]) return true;
    }
    return false;
}
int main(){
    while(true){
        cin >> pw;
		if(pw == "end") break;
		isValid = true;
        sameMo = 0;
        sameJa = 0;
        prevMo = 0;
        prevJa = 0;
        convert = 0;
        temp = 0;
        for(char a : pw){
            moeum = isMo(a);
            if(moeum){
				convert++;
                if((a != 'e' && a != 'o') && temp == a){
                    sameMo++;
                }
                prevMo++;
                prevJa = 0;
            }else{
                if(temp == a) sameJa++;
                prevJa++;
                prevMo = 0;
            }
			if(prevJa >= 3 || prevMo >= 3 || sameMo >= 1 || sameJa >= 1) {
            isValid = false;
			break;
        }
            temp = a;
        }
        if(convert == 0) isValid = false;
        if(isValid){
            cout << "<" << pw<< "> is acceptable." << "\n";
        } else{
            cout << "<" << pw<< "> is not acceptable." << "\n";
        }
    }
    return 0;
}