#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n;
    cin >> n;
    int n2 = 1 << n;
    vector<int> a(n2);
    rep(i, n2) {
        cin >> a.at(i);
    }
    map<int,int> mp;
    rep(i, n2) mp[a.at(i)] = i + 1; 
    while (a.size() > 2 ) {
        vector<int> aa;
        for (int i = 0; i < a.size(); i += 2) {
            aa.push_back(max(a.at(i), a.at(i + 1)));
        }
        swap(a, aa);
    }
    int ans = min(a.at(0), a.at(1));
    cout << mp[ans] << endl;    
}