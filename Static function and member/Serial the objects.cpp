#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Count {
    ll SI ;
    static ll cnt ;
public:
    Count() {
        cnt++ ;
        SI = cnt ;
    }

    void show_SI() {
        cout << "Object No: " << SI << endl ;
    }

    static void No_of_object () {
        cout << "Number of Object Created: " << cnt << endl ;
    }
};

ll Count::cnt = 0 ;

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    Count a, b, c, d ;
    Count::No_of_object() ;
    a.show_SI() ;
    b.show_SI() ;
    c.show_SI() ;
    d.show_SI() ;

    Count e, f ;
    Count::No_of_object() ;
    e.show_SI() ;
    f.show_SI() ;
}      
