#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

class Employee {
    public:
        int number;
        char name[80];
        int salaly;
        virtual void showData();
};

void Employee::showData() {
    cout << number << endl;
    cout << name << endl;
    cout << salaly << endl;
}

class Salesman : public Employee {
    public :
        int sales;
        void showData();
};

void Salesman:: showData() {
    Employee::showData();
    cout << sales << endl;
}


int main() {    
    Salesman tanaka;
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salaly = 200000;
    tanaka.sales = 40000000;
    tanaka.showData();
    return 0;

}