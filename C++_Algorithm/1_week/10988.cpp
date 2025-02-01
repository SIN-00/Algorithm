#include <bits/stdc++.h>
using namespace std;

char word[104];

int main() {
    int isPalin = 1;
    cin >> word;
    
    int len = strlen(word);  // 문자열의 길이를 미리 저장
    for (int i = 0; i < len / 2; i++) {  // 문자열의 절반만 확인
        if (word[i] != word[len - 1 - i]) {  // 양 끝에서 중앙으로 비교
            isPalin = 0;
            break;
        }
    }
    cout << isPalin;
    return 0;
}
