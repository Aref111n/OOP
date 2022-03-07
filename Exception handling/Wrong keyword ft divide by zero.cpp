#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<double> input() {
  string a, b ;
  cin >> a >> b ;
  vector<double>v ;  
    int x = 0 ;
    for(int i=0; i<a.size(); i++) {
        if(a[i]>='0' && a[i]<='9')
          continue ;
        else if(a[i]=='.' && x==0) x=1 ;
        else
          throw runtime_error("Wrong type is keyed in!!!") ;
    }
  
    x = 0 ;
    for(int i=0; i<b.size(); i++) {
        if(b[i]>='0' && b[i]<='9')
          continue ;
        else if(b[i]=='.' && x==0) x=1 ;
        else
          throw runtime_error("Wrong type is keyed in!!!") ;
    }

    v.push_back(stod(a)) ;
    v.push_back(stod(b)) ;
    return v ;
}

double div(double a, double b) {
  if(b==0) 
    throw runtime_error("divided by zero is occured") ;
  return a/b ;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("outp.txt", "w", stdout);
#endif
    
    double a, b ;
    try{
      vector<double> v = input() ;
      a = v[0] ;
      b = v[1] ;

      try {
        double ans = div(a, b) ;
        cout << ans << endl ;
      }
      catch(runtime_error &e) {
        cout << e.what() << endl ;
      }
    }
    catch(runtime_error &e)  {
      cout << e.what() << endl ;
    }

}
