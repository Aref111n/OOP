/*
A book shop maintains the inventory of books that are being sold at the shop.
The list includes details such as author, title, price, publisher and stock position.
Whenever a customer wants a book, the sales person inputs the title and author
and the system searches the list and displays whether it is available or not. If
it is not, an appropriate message is displayed. If it is, then the system displays
the book details and requests for the number of copies required. If the requested
copies are available, the total cost of the required copies is displayed, otherwise
the message Sorry! These many copies are not in stock is displayed.
Design a system using a class called stock with suitable member functions and
constructors.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

class stock {
public:
    string title, author, publisher ;
    ll price, stock_position ;
    stock() {
        getline(cin, author) ;
        getline(cin, title) ;
        cin >> price ;
        getchar() ;
        getline(cin, publisher) ;
        cin >> stock_position ;
        getchar() ;
    }

    void show() {
        cout << "Author: " << author << endl ;
        cout << "Title: " << title << endl ;
        cout << "Price: " << price << "Taka only" << endl ;
        cout << "Publisher: " << publisher << endl ;
        cout << "stock position: " << stock_position << endl ;
    }

    ll search(string T, string A) {
        if(T==title && A==author) {
            show() ;
            ll copy ;
            cout << "Enter How many copies Do you need: " << endl;
            cin >> copy ;
            if(copy<=stock_position) {
                cout << "Total price: " << copy*price << endl ;
                return 0 ;
            }
            else
            {
                cout <<  "Sorry! These many copies are not in stock" << endl ;
                return 1;
            }
        }
        else
            return -1 ;
    }
};


int main()
{
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif

    stock a[5] ;

    string title, author ;
    getline(cin, title) ;
    getline(cin, author) ;

    bool f=0 ;
    for(int i=0; i<5; i++) {
        if(a[i].search(title, author)>=0)
        {
            f=1;
            break;
        }
    }

    if(f==0)
        cout << "Not found" << endl ;

}      
