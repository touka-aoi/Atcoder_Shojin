#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    vector<int> a(5);
    vector<vector<int>> ab(5, vector<int>(3));
    cout << a.size() << endl;
    cout << ab.size() << " " << ab.at(0).size() << endl;
    ab.resize(3);
    cout << a.size() << endl;
    cout << ab.size() << " " << ab.at(0).size() << endl;
}