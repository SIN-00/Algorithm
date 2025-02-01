#include <bits/stdc++.h>
using namespace std;

string s, palin;

int main() {
    cin >> s;
    int alpha[26] = {0}; // 각 알파벳의 개수를 저장
    int odd = 0;         // 홀수 개수의 알파벳 수
    char oddAlpha;       // 홀수 개수의 알파벳 문자

    // 각 알파벳의 빈도 계산
    for (char c : s) {
        alpha[c - 'A']++;
    }

    // 홀수 개수의 알파벳 확인
    for (int i = 0; i < 26; i++) {
        if (alpha[i] % 2 != 0) {
            oddAlpha = i + 'A';
            odd++;
            if (odd > 1) { // 홀수 개수의 알파벳이 2개 이상이면 팰린드롬 불가
                cout << "I'm Sorry Hansoo" << endl;
                return 0;
            }
        }
    }

    // 팰린드롬의 첫 번째 절반 생성
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < alpha[i] / 2; j++) {
            palin += (i + 'A');
        }
    }

    // 팰린드롬 완성
    string result = palin;
    if (odd == 1) { // 홀수 개수의 알파벳이 있으면 가운데 추가
        result += oddAlpha;
    }
    reverse(palin.begin(), palin.end());
    result += palin; // 오른쪽 절반 추가

    cout << result << endl;
    return 0;
}
