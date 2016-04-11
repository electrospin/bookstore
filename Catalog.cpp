#include <iostream>
#include "Catalog.h"
using namespace std;

template<typename Book>
Catalog<BookType>::Catalog()//defualt constructor
{
    numbooks = 0;
    currentPos = 0;
    cout << "Hello from catalog constructor." << endl;
}

template<typename Book>
Catalog<Book>::Catalog(unsigned long int iniNumbooks,unsigned long int iniCurrentPos)
{
    numbooks = iniNumbooks;
    currentPos = iniCurrentPos;
}

Catalog::~Catalog()
{
    cout << "Default Catalog constructor called." << endl;
}

template<typename Book>
bool Catalog::IsEmpty() const
{
    
}

template<typename Book>
bool Catalog::IsEmpty() const
{
    
}

template<typename Book>
bool Catalog::IsEmpty() const
{
    
}
template<typename Book>
bool Catalog::IsEmpty() const
{
    
}
template<typename Book>
bool Catalog::IsEmpty() const
{
    
}

template<typename Book>
bool Catalog::IsEmpty() const
{
    
}
template<typename Book>
bool Catalog::IsEmpty() const
{
    
}



