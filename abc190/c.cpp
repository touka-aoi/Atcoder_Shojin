#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n, m;
    cin >> n >> m;
    vector<P> as(m);
    rep(i, n) 
    {
        int a, b;
        cin >> a >> b;
        as.at(i).first = a;
        as.at(i).second = b;
    }
    int k;
    cin >> k;
    vector<bool> dish(n, false);
    rep(i, k)
    {
        int c, d;
        cin >> c >> d;
        if (dish.at())
    }
    //あ。。どっちかしか置けないのか。。。
}