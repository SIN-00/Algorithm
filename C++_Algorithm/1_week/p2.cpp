//오름차순과 평균값
#include <bits/stdc++.h>
using namespace std;

int n, temp;
vector<int> v;
int main(){
    //첫번째 줄에 배열의 크기 (1<= N <= 100)이주어지고 두번째 줄에 N개의 정수가 주어짐 각 정수는 -1000~1000
    cin >> n;
    double b = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>temp;
        b+= temp;
        v.push_back(temp);
    }
    //정렬된 배열을 출력하고, 두번째 줄에 배열의 평균값을 출력하시오. 평균값은 소수점 두번째 자리
    sort(v.begin(), v.end());
    for(int i : v) cout << i << " ";
    cout << '\n';
    cout << fixed << setprecision(2) << (b/n) << '\n';
    return 0;
}