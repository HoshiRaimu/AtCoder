#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, pattern = 0;;
    cin >> N;
    vector<pair<int, int>> xy(N);
    for(int i = 0; i < N; i++) cin >> xy[i].first >> xy[i].second;

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            double slope = (double)(xy[i].second - xy[j].second) / (xy[i].first - xy[j].first);
            if(slope >= -1 && slope <= 1) pattern++;
        }
    }
    cout << pattern << endl;

    return 0;
}