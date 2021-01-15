#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, opponent = 1;
    cin >> N;
    N = pow(2, N);
    vector<pair<int,int>> A(N);
    for(int i = 0; i < N; i++) {
        A.at(i).first = i+1;
        cin >> A[i].second;
    }

    while(opponent != N) {
        for(int i = 0; i < N; i += opponent*2) {
            if(A[i].second < A[i+opponent].second) swap(A[i], A[i+opponent]);
        }
        opponent *= 2;
    }

    cout << A[N/2].first << endl;

    return 0;
}