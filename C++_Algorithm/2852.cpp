#include <bits/stdc++.h>
using namespace std;

int n, team, team1, team2;
string goalTime, tempTime;
pair<int, int> team1Time = {0, 0}, team2Time = {0, 0};
enum res { WIN, LOSE, DRAW };

vector<string> split(const string &input, string delimiter) {
    vector<string> result;
    size_t start = 0;
    size_t end = input.find(delimiter);
    while (end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

// 시간 차이를 계산하는 함수
pair<int, int> convert(string goalTime, string tempTime) {
    vector<string> a = split(goalTime, ":");
    vector<string> b = split(tempTime, ":");
    int min = stoi(a[0]) - stoi(b[0]);
    int sec = stoi(a[1]) - stoi(b[1]);
    if (sec < 0) {
        sec += 60;
        min -= 1;
    }
    return {min, sec};
}

// 시간 누적 함수
void addTime(pair<int, int> &time, pair<int, int> addedTime) {
    time.first += addedTime.first;
    time.second += addedTime.second;
    if (time.second >= 60) {
        time.first += time.second / 60;
        time.second %= 60;
    }
}

int main() {
    cin >> n;
    res now = DRAW;
    tempTime = "00:00";
    
    for (int i = 0; i < n; i++) {
        cin >> team >> goalTime;
        if (team1 > team2 && now == WIN) {
            addTime(team1Time, convert(goalTime, tempTime));
        } else if (team2 > team1 && now == LOSE) {
            addTime(team2Time, convert(goalTime, tempTime));
        }
        
        if (team == 1) team1++;
        else team2++;
        
        if (team1 > team2) now = WIN;
        else if (team2 > team1) now = LOSE;
        else now = DRAW;

        tempTime = goalTime;
    }

    // 마지막 종료 시간 처리
    if (team1 > team2) {
        addTime(team1Time, convert("48:00", tempTime));
    } else if (team2 > team1) {
        addTime(team2Time, convert("48:00", tempTime));
    }

    // 출력
    cout << setw(2) << setfill('0') << team1Time.first << ":"
         << setw(2) << setfill('0') << team1Time.second << "\n";
    cout << setw(2) << setfill('0') << team2Time.first << ":"
         << setw(2) << setfill('0') << team2Time.second << "\n";

    return 0;
}
