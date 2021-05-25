#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main(){
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int a,b,w;
    cin >> a >> b >> w;
    int m=1e9,M=0;
    for(int n=1;n<=1000000;n++){
        if(a*n<=1000*w && 1000*w<=b*n){
        m=min(m,n);
        M=max(M,n);
        }
    }
// forで回り続けるのね... :D それで範囲外に出るまで回り続ける。

    if(M==0)cout << "UNSATISFIABLE";
    else cout << m << ' ' << M;
    }
