#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, inner_product = 0;
    cin >> N;
    vector<int> A(N), B(N);
    for(int i = 0; i < N; i++) cin >> A.at(i);
    for(int i = 0; i < N; i++) cin >> B.at(i);

    for(int i = 0; i < N; i++) inner_product += A.at(i) * B.at(i);

    if(inner_product == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}