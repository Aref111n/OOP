#include<bits/stdc++.h>
#define ll long long
using namespace std;

class base {
protected:
  int val ;
};

class derived1 : virtual public base {
public:
  derived1() {
    val = 2 ;
  }
};

class derived2 : virtual public base {
public:
  derived2() {
    val = 3 ;
  }
};

class derived3 : public derived1 , public derived2 {  //The righmost class derived in this line will be taken for output, thats why 3 will be printed
public:                                               //If we use: class derived3 : public derived2 , public derived1 {...}
  void show() {                                       //Then the output will be 2
    cout << val << endl ;
  }
};

int main()
{
#ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("outp.txt", "w", stdout);
#endif
    
  derived3 d ;
  d.show() ;
}
