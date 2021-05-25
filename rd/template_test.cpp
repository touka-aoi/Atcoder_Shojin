#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;


//二つ作るのめんどくさい...
int compI (int a, int b) 
{
    if (a < b) return b;
    else return a;
}

float compF (float a, float b) 
{
    if (a < b) return b;
    else return a;
}

class Comp{
    public:
        int comp (int a, int b);

    int sum(int a, int b)
    {
        return a + b;
    }
};

template <class type> type comp (type a , type b)
{
    if (a < b) return b;
    else return a;
}


int main() {
    Comp test; //やっぱコンストラクタいるよな
    cout << test.sum(1, 2);
    cout << comp(1, 2) << endl;
}