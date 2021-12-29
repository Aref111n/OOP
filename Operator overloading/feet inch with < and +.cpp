/*
Define a class Distance with feet and inch and with a print function to print the
distance.
a) overload < operator compares two distances using member function.
b) overload + operator to add two Distances using friend function.
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Distance {
    ll feet, inch ;
public:
    Distance() {} ;

    Distance(ll feet, ll inch) {
        this->feet = feet ;
        this->inch = inch ;
    }

    void show () {
        cout << feet << " feet " << inch << " inch" << endl ;
    }

    bool operator< (Distance d) {
        if(feet < d.feet)
            return true ;
        else if(feet==d.feet && inch<d.inch)
            return true ;
        else
            return false ;
    }

    friend Distance operator+ (Distance d1, Distance d2) ;
};

Distance operator+ (Distance d1, Distance d2) {
    Distance d ;
    d.inch = d1.inch + d2.inch ;
    d.feet = (d.inch/12) ;
    d.inch%=12 ;
    d.feet += (d1.feet+d2.feet) ;
    return d ;
}

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    Distance a(2, 5), b(2, 7), c ;
    c = a+b ;
    c.show() ;
    if(b<c && a<c)
        cout << "C is bigger" << endl ;
    else
        cout << "C is not bigger" << endl ;
}      
