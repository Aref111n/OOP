#include<bits/stdc++.h>
#define ll long long
using namespace std;

template <class T>

T mini(T a[], int n) {
  T mn = a[0] ;

  for(int i=0; i<n; i++) {
    mn = min(mn, a[i]) ;
  }

  return mn ;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("outp.txt", "w", stdout);
#endif
  
  int n ; cin >> n ;

  //checking for integer array  
  int a[n+5] ;
  for(int i=0; i<n; i++)
    cin >> a[i] ;
  cout << mini(a, n) << endl ;

  //checking for integer array  
  double d[n+5] ;
  for(int i=0; i<n; i++)
    cin >> d[i] ;
  cout << mini(d, n) << endl ;

  //checking for integer array  
  string s[n+5] ;
  for(int i=0; i<n; i++)
    cin >> s[i] ;
  cout << mini(s, n) << endl ;
}

/*
Input:
5
9 4 6 2 7
2.2 3.4 5.66 1.23 0.987
abc dfg jhg aaf acd
Output:
2
0.987
aaf
*/
