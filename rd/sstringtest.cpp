#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    string glory;
    //cin >> glory;
    glory = "sstringtes.txt";
    ofstream ofs(glory);
    ofs << "書き込み" << endl;
    ofs << "テストです" << endl;
    ofs.close();
    stringstream ss;
    ss << "mihoyo" << "hohohho";
    cout << ss.str() << endl;
    ofstream ofs_text(glory, ios::out | ios::app);
    ofs_text.write(ss.str().c_str(), (streamsize)ss.str().length());
}