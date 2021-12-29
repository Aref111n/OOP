/*
Suppose class abc which have 3 private member a=7, b=2 and c=4. 
Another class xyz have 3 private member x=1, y=4 and z=2. 
Create a class avg to access the private members of both the class abc and xyz. 
In a method in the class avg, first average value of each class separately and then print their difference.
You have to return = average(a,b,c) ~ average(x,y,z)

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

class xyz ;

class abc {
    ll a=7, b=2, c=4 ;
    friend class avg ;
};

class xyz {
    ll x=1, y=4, z=2 ;
    friend class avg ;
};

class avg {
public:
    double calc(abc o1, xyz o2) {
        double avg1 = double(o1.a+o1.b+o1.c)/3 ;
        double avg2 = double(o2.x+o2.y+o2.z)/3 ;
        return avg1 - avg2 ;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    avg a ;
    abc o1 ;
    xyz o2 ;
    cout << a.calc(o1,o2) ;
}      
