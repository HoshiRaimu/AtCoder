#include <bits/stdc++.h>
using namespace std;

int func(string s) {
    int sum = 0;
    sum += s[0] - '0';
    sum += s[1] - '0';
    sum += s[2] - '0';
    return sum;
}

int main() {
    string A, B;
    cin >> A >> B;

    int ans = max(func(A), func(B));
    cout << ans << endl;

    return 0;
}