#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, y;
    cin >> n >> y;
    y /= 1000;
    int a = -1;
    int b = -1;
    int c = -1;
    for (int i = 0; i <= n; i++) { // 一万円
        for (int j = 0; j <= (n - i); j++)  { //五千円
            int k = n - (i + j);
            if (y == i * 10 + j * 5 + k * 1){
                a = i;
                b = j;
                c = k;
            }
        }
    }
    cout << a << " " << b << " " << c;
}