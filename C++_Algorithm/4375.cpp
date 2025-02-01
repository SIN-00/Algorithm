#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int k = 1;      // 현재 수의 나머지
        int cnt = 1;    // 자리수

        while (k % n != 0) { // n으로 나누어떨어질 때까지 반복
            k = (k * 10 + 1) % n; // 나머지를 유지하며 다음 수 계산
            cnt++;
        }

        printf("%d\n", cnt); // 결과 출력
    }

    return 0;
}
