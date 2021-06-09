#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main () {
  int n;
  cin >> n;
  queue<char> q;
  rep(i, n) {
    int temp;
    cin >> temp;
    if (temp) {
     	q.pop();
    }    
    else {
      char t;
      cin >> t;
      q.push(t);
    }
  }
  while(!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
}