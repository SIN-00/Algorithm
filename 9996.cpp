#include <bits/stdc++.h>
using namespace std;

int N;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    string file[N];
    string pattern;
    cin >> pattern;
    string first, last;
    int i;
    for(i = 0; pattern[i] == '*'; i++){
        first += pattern[i];
    }
    int tmp = i;
    for(tmp; tmp < pattern.size()-1; tmp++)
    {
        last += pattern[tmp];
    }
    for(int i = 0 ; i < N; i++){
        cin >> file[i];

    }

    for(int j = 0; j < N; j++){
        if(*file[j].begin() == first && file[j].back() == last)
        {
            cout << "DA" << "\n";
        }
        else cout << "NE" << "\n";
    }

}