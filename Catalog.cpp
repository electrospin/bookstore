#include <iostream>
#include "Catalog.h"
using namespace std;

template<typename T>
Catalog<T>::Catalog()//defualt constructor
{
    numbooks = 0;
    currentPos = 0;
    cout << "Hello from catalog constructor." << endl;
}

template<typename T>
Catalog<T>::Catalog(unsigned long int iniNumbooks,unsigned long int iniCurrentPos)
{
    numbooks = iniNumbooks;
    currentPos = iniCurrentPos;
}
template<typename T>
Catalog<T>::~Catalog()
{
    //out << "Default Catalog constructor called." << endl;
}

template<typename T>
bool Catalog<T>::IsEmpty() const
{
    return (numbooks==0);
}

template<typename T>
bool Catalog<T>::IsFull() const
{
    return (numbooks==MAX_LENGTH);
}

template<typename T>
int Catalog<T>::GetLength() const
{
    return numbooks;
    
}
template<typename T>
void Catalog<T>::Insert(const T& item)
{
    books[numbooks]= item;
   // numbooks++;
}

template<typename T>
void Catalog<T>::Delete(const T &item) 
{
    int i =0;
    for(int i=0; i<numbooks,item!=books[i];i++);
    while (i<numbooks && item!=books[i])
        i++;
    if(i<numbooks)
    {
        books[i]=books[numbooks-1];
        numbooks--;
    }
}
template<typename T>
void Catalog<T>::ResetList()
{
    currentPos =0;
}

template<typename T>
T Catalog<T>::GetNextItem()
{
    T item;
    item = books[currentPos];
    //currentPos++;
    return item;
}



