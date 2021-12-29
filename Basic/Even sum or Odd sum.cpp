#include<bits/stdc++.h>
#define ll long long
using namespace std;

class IntegerFactory {
    int a[100] ;
public:
    void get(ll n) {
        for(int i=0; i<n; i++)
            cin >> a[i] ;
    }

    ll odd_sum(ll n) {
        ll s = 0 ;
        for(int i=0; i<n; i+=2)
            s+=a[i] ;
        return s;
    }

    ll even_sum(ll n) {
        ll s = 0 ;
        for(int i=1; i<n; i+=2)
            s+=a[i] ;
        return s ;
    }    
};

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    IntegerFactory a ;
    ll n ;
    cin >> n ;
    a.get(n) ;
    ll c, ans ;
    cin >> c ;
    if(c==0)
        ans = a.even_sum(n) ;
    else
        ans = a.odd_sum(n) ;

    cout << ans << endl ;
}      
