#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string out;
    bool loopEnd = false;
    cin >> N;
    vector<string> S(N);
    for(int i= 0; i < N; i++) cin >> S[i];

    sort(S.begin(), S.end());
    reverse(S.begin(), S.end());
    
    for(int i = 0; i < N; i++) {
        if(S[i][0] == '!') break;
        else if(loopEnd) break;

        for(int j = i+1; j < N; j++) {
            if(S[j][0] != '!') continue;
            string s = '!' + S[i];
            if(s == S[j]) {
                out = S[i];
                loopEnd = true;
                break;
            }
        }
    }
    
    if(loopEnd) cout << out << endl;
    else cout << "satisfiable" << endl;

    return 0;
}