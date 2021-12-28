/*
Create two classes named Mammals and MarineAnimals. Create
another class named BlueWhale which inherits both the above classes. Now,
create a function in each of these classes which prints “I am mammal”, “I am a
marine animal” and “I belong to both the categories: Mammals as well as Marine
Animals” respectively. Now, create an object for each of the above class and try
calling,
• function of Mammals by the object of Mammal
• function of MarineAnimal by the object of MarineAnimal
• function of BlueWhale by the object of BlueWhale
• function of each of its parent by the object of BlueWhale
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Mammals {
public:
    void printMammal() {
        cout << "I am mammals" << endl ;
    }
};

class MarineAnimals {
public:
    void printMarine() {
        cout << "I am Marine Animals" << endl ;
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void print() {
        cout << "I am both" << endl ;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    Mammals m ;
    MarineAnimals ma ;
    BlueWhale b ;
    m.printMammal() ;
    ma.printMarine() ;
    b.printMammal() ;
    b.printMarine() ;
    b.print() ;    
}      
