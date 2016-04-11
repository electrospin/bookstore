#include <iostream>
#include "Catalog.h"


using namespace std;

template<typename Book>
Catalog<Book>::Catalog()//defualt constructor
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
template<typename Book>
Catalog<Book>::~Catalog()
{
    cout << "Default Catalog constructor called." << endl;
}

template<typename Book>
bool Catalog<Book>::IsEmpty() const
{
    return (numbooks==0);
}

template<typename Book>
bool Catalog<Book>::IsFull() const
{
    return (numbooks==MAX_LENGTH);
}

template<typename Book>
int Catalog<Book>::GetLength() const
{
    return numbooks;
    
}
template<typename Book>
void Catalog<Book>::Insert(const Book &item)
{
    books[numbooks]= item;
    numbooks++;
}

template<typename Book>
void Catalog<Book>::Delete(const Book &item) 
{
    int i =0;
    //for(int i=0; i<numbooks,item!=books[i];i++);
    while (i<numbooks && item!=books[i])
        i++;
    if(i<numbooks)
    {
        books[i]=books[numbooks-1];
        numbooks--;
    }
}
template<typename Book>
void Catalog<Book>::ResetList()
{
    currentPos =0;
}

template<typename Book>
Book Catalog<Book>::GetNextItem()
{
    Book item;
    item = books[currentPos];
    currentPos++;
    return item;
}



