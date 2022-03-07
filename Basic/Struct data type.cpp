#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct distance {
  double inch, feet ;
};

class Volume {
  struct distance length, width, height ;
public:
  Volume() {
    cin >> length.feet >> length.inch ;
    cin >> width.feet >> width.inch ;
    cin >> height.feet >> height.inch ;
  }

  double calc() {
    double l, w, h ;
    l = length.feet + (length.inch/12) ;
    w = width.feet + (width.inch/12) ;
    h = height.feet + (height.inch/12) ;
    return l*w*h ;
  }
};

int main()
{
#ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("outp.txt", "w", stdout);
#endif
    
  Volume v ;
  cout << v.calc() << endl ;
  return 0 ;
}
