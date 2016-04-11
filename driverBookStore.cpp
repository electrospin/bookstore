#include <iostream>
#include "Catalog.h"
#include "Book.h"
using namespace std;

int main ()
{
    Book bookobj;
    Book bkoj(128939393,"Intro to QM", "Carl Sagan","5 th ed",200,1999);
    cout << "Hello from main() ." << endl;
    return 0;
}