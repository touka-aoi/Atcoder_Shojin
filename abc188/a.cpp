#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    
    int x;
    int y;
    cin >> x;
    cin >> y;
    if (x > y) {
        if ((y + 3) > x) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        if ((x + 3) > y) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}