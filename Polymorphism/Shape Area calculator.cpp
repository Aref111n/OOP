/*
Suppose we need to model two-dimensional shape objects, such as rectangles, squares, triangles, ellipses, and circles. 
a)rectangle, ellipse and triangle needs two value as input to calculate area
b)Squere and circle needs only one value as input to calculate area
Your code must provide An abstract class named shape and some concrete class.
They have the features:
1) get() to take the input value
2) area() to calculate and return area
Your code will first take an integer choice from user.
if choice=0 then the process will finish and all the previous calculated area will be summed and showed as result.
and for the value of choice 1,2,3,4,5 calculate Circles, ellipses, squares, rectangles, and triangles consecutively.
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

class shape {
public:
    virtual void get()=0 ;
    virtual ll area()=0 ;
};

class rectangle : public shape {
protected:    
    int a, b ;
public:
    void get() {
        cin >> a >> b ;
    }

    ll area() {
        return a*b ;
    }
};

class triangle : public rectangle {
public:
    ll area() {
        return 0.5*a*b ;
    }
};

class ellipse : public rectangle {
public:
    ll area() {
        return 3.1416*a*b ;
    }
};

class square : public shape {
protected:
    int r ;
public:
    void get() {
        cin >> r ;
    }

    ll area () {
        return r*r ;
    }
};

class circle : public square {
public:
    ll area () {
        return 3.1416*r*r ;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    int s=0 ;
    shape *p ;
    while(true) {
        int choice ;
        cin >> choice ;
        if(choice==0)
            break;
        else if(choice==1) {
            circle c ;
            p = &c ;
        }
        else if(choice==2) {
            ellipse c ;
            p = &c ;
        }
        else if(choice==3) {
            square c ;
            p = &c ;
        }
        else if(choice==4) {
            rectangle c ;
            p = &c ;
        }
        else if(choice==5) {
            triangle c ;
            p = &c ;
        }
        p->get() ;
        s+=p->area() ;
    }

    cout << s << endl ;
    
}      
