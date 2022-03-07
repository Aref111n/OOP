#include<bits/stdc++.h>
#define ll long long
using namespace std;

class prepost {
  int x ;
public:
  prepost() {} ;
  prepost(int x){
    this->x = x ;
  }
  friend prepost operator++ (prepost &p) ;
  friend prepost operator++ (prepost &p, int v) ;
  void show() {
    cout << x << endl ;
  }
};

prepost operator++ (prepost &p) {
  prepost z ;
  z.x = ++p.x ;
  return z ;
}

prepost operator++ (prepost &p, int v) {
  prepost z ;
  z.x = p.x++ ;
  return z ;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("outp.txt", "w", stdout);
#endif
    
    prepost p(5) ;
    prepost q ;
    q = p++ ;
    q.show() ;
    p.show() ;
    q = ++p ;
    q.show() ;
    p.show() ;
    return 0 ;
}

/*
Output:
5
6
7
7
*/
