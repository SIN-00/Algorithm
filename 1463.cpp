#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // DP 배열 선언 및 초기화
    vector<int> dp(N + 1, 0);

    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1; // 1을 빼는 경우
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1); // 2로 나누는 경우
        }
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1); // 3으로 나누는 경우
        }
    }

    // 결과 출력
    cout << dp[N] << '\n';
    return 0;
}
