#include<bits/stdc++.h>
#define ll long long
using namespace std;

class abc {
public:
    static ll cnt ;
    abc() {
        cnt++ ;
        cout << "Created object " << cnt << endl ;
    }

    ~abc() {
        cout << "Destroyed object " << cnt << endl ;
        cnt--;
    }
};

ll abc::cnt = 0 ;
int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    abc a, b, c, d ;
    cout << "Enter block" << endl ;
    {
        abc e, f ;
    }
    cout << "End of block" << endl ;
}      
