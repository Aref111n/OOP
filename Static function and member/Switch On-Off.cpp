#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Workstation {
    static ll Switch ;
public:
    void power() {
        Switch = 1 - Switch ;
    }

    void check() {
        if(Switch)
            cout << "This PC is ON" << endl ;
        else
            cout << "This PC is OFF" << endl ;
    }
};

ll Workstation::Switch = 0 ;

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    Workstation a, b, c, d ;
    a.power() ;
    d.check() ;
    b.power() ;
    d.check() ;
    c.power() ;
    d.check() ;
}      
