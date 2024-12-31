#include <bits/stdc++.h>
using namespace std;

int N, M;

int main() {
    cin >> N >> M;

    vector<pair<int, string>> poket;
    string mon, posMon;

    // 포켓몬 이름과 번호 입력
    for (int i = 0; i < N; i++) {
        cin >> mon;
        poket.push_back({i + 1, mon});
    }

    // 문제 해결을 위한 입력 처리
    for (int j = 0; j < M; j++) {
        cin >> posMon;

        // 숫자인 경우와 문자열인 경우를 구분
        if (isdigit(posMon[0])) { // 첫 글자가 숫자인지 확인
            int posNum = stoi(posMon); // 문자열을 정수로 변환
            if (posNum >= 1 && posNum <= N) {
                cout << poket[posNum - 1].second << '\n'; // 번호에 해당하는 포켓몬 이름 출력
            } 
        } 
        else {
            // 문자열로 검색
            auto it = find_if(poket.begin(), poket.end(),
                              [&](const pair<int, string>& p) { return p.second == posMon; });
            if (it != poket.end()) {
                cout << it->first << '\n'; // 이름에 해당하는 번호 출력
            } 
        }
    }

    return 0;
}
