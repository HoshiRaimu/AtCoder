#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    bool xDominant;

    if(X < Y) {
        xDominant = false;
        X += 3;
    }else {
        xDominant = true;
        Y += 3;   
    }
    
    if(X < Y) {
        if(xDominant) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else if(X > Y) {
        if(xDominant) cout << "No" << endl;
        else cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}