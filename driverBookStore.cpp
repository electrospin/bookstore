#include <iostream>
#include "Catalog.h"
#include "Catalog.cpp"
#include "Book.h"
using namespace std;

int main ()
{
    Book *p;
    
    //cout << "Please enter a ___" << endl;
    
    //Book bkoj(128939393,"Intro to QM", "Carl Sagan","5 th ed",200,1999);
    Catalog<Book> Cat;
    
    Cat.Insert(bkoj);
    cout << "Hello from main() ." << endl;
    
    return 0;
}