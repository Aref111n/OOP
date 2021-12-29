/*
Create a class which have 4 member a, b, c, d ;
Create 2 object which are initialized with parameter.
Create another object, that will copy a, b, c from 2nd object. 
The rest members will be initialized to 0.
Then show all the objects.
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

class abc {
    ll a, b, c, d ;
public:
    abc() {} ;

    abc(ll a, ll b, ll c, ll d) {
        this->a = a ;
        this->b = b ;
        this->c = c ;
        this->d = d ;
    }

    abc(abc &c) {
        a = c.a ;
        b = c.b ;
        this->c = 0 ;
        d = 0 ;
    }

    void show() {
        cout << a << " " << b << " " << c << " " << d << endl ;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    abc a(2, 3, 5, 7), b(1, 1, 2, 4), c(b) ;
    a.show() ;
    b.show() ;
    c.show() ;
}      
