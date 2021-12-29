#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Temp {
public:
    static ll avg(ll x, ll y, ll z) {
        return (x+y+z)/3 ;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    ll a, b, c ;
    cin >> a >> b >> c ;
    cout << Temp::avg(a, b, c) ;
}      
