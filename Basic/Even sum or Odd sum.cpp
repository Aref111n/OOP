/*
Problem A: Sum of Even/Odd
Description:
Write an object oriented program that reads a set of non-negative integer numbers and output the sum of odd numbers and even numbers from that. To create
the program, you have to write a class name IntegerFactory where there will be
an integer array as private variable. There will also be public member functions
that will responsible for providing the sums.
Input Format:
Program will read an integer n, followed by n integers and an integer c for choice
to show either the sum of even number or the sum of odd numbers of these n
integers. c=0 for sum of odd numbers and c=1 for sum of even numbers.
Constraints:
0 < n <= 10000, 0 <= c <= 1
Sample Input:
5
1 2 3 4 5
0
Sample Output:
6
*/
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
    if(c==1)
        ans = a.even_sum(n) ;
    else
        ans = a.odd_sum(n) ;

    cout << ans << endl ;
}      
