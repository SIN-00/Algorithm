#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> more(N);
    vector<int> line(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> more[i];
    }

    for (int i = 0; i < N; i++) {
        int count = more[i];
        for (int j = 0; j < N; j++) {
            if (count == 0 && line[j] == 0) {
                line[j] = i + 1;
                break;
            } else if (line[j] == 0) {
                count--;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << line[i] << " ";
    }
    cout << endl;

    return 0;
}
