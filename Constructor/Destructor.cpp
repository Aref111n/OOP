#include<bits/stdc++.h>
#define ll long long
using namespace std;

class abc {
public:
    abc() {
        cout << "Object created" << endl ;
    }

    ~abc() {
        cout << "Object destroyed" << endl ;
    }
};

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
