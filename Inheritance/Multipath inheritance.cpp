#include<bits/stdc++.h>
#define ll long long
using namespace std;

class person {
public:
  string name ;
  int code ;
  int exp ;
  double pay ;

  void input() {
    getline(cin, name) ;
    cin >> code >> exp >> pay ;
  }
};

class account : virtual public person {
  double p ;
public:
  account() {
    p = pay ;
  }
};

class admin : virtual public person {
  double experience ;
public:
  admin() {
    experience = exp ;
  }
};

class master : public account , public admin {
public:
  void show() {
    cout << "Name:" << name << endl ;
    cout << "code:" << code << endl ;
  }
};

int main()
{
#ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("outp.txt", "w", stdout);
#endif
    
  master m ;
  m.input() ;
  m.show() ;
}
