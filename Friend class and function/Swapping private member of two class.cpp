#include<bits/stdc++.h>
#define ll long long
using namespace std;

class xyz ;

class abc {
    ll a=7, b=2, c=4 ;
public:
    friend void swapp(abc &o1, xyz &o2) ;
    void show() {
        cout << a << " " << b << " "  << c << endl ;
    }
};

class xyz {
    ll x=1, y=4, z=2 ;
public:
    friend void swapp(abc &o1, xyz &o2) ;
    void show() {
        cout << x << " " << y << " "  << z << endl ;
    }
};

void swapp(abc &o1, xyz &o2) {
    swap(o1.a, o2.x);
    swap(o1.b, o2.y);
    swap(o1.c, o2.z);
}

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    abc o1 ;
    xyz o2 ;
    o1.show() ;
    o2.show() ;
    swapp(o1, o2) ;
    o1.show() ;
    o2.show() ;
}      
