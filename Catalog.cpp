#include <iostream>
#include "Catalog.h"
#include <new>
#include <sstream>
using namespace std;

template<typename T>
Catalog<T>::Catalog()//defualt constructor
{
    numbooks = 0;
    currentPos = 0;
    cout << "Hello from catalog constructor." << endl;
    try 
    {
        booklist = new Book[MAX_LENGTH];
    }
    catch (bad_alloc& pt)
    {
        cout << "This is the explanation: " << pt.what() << endl;
    }
    
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
    delete [] booklist;
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
    booklist[numbooks]= item;
    numbooks++;
}

template<typename T>
void Catalog<T>::Delete(const T& item) 
{
    int i =0;
    for(int i=0; i<numbooks,item!=booklist[i];i++);
    while (i<numbooks && item!=booklist[i])
        i++;
    if(i<numbooks)
    {
        booklist[i]=booklist[numbooks-1];
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
    item = booklist[currentPos];
    currentPos++;
    return item;
}

template<typename T>
string Catalog<T>::SearchByTitle(/*pass it the title*/string keyTitle)const //this method is based on a sequential search in an unsorted list. 
{
    //for loop and iterate over the length of the array size
        // and compare.

    for (int i =0; i<numbooks;i++)
    {
        if(keyTitle == booklist[i].GetTitle())
        {return booklist[i].GetBookINFO();}
    }
   // return 0;
}

template<typename T>
string Catalog<T>::SearchByISBN(/*pass it the ISBN*/string keyISBN)const
{
    for (int i =0; i<numbooks;i++)
    {
        if(keyISBN == booklist[i].GetISBN())
        {   
            cout << "key value found!" << endl;
            return booklist[i].GetBookINFO();
            
            //return booklist[i].GetISBN();
        }
        else 
            cout << "Your search term didn't return a book found in inventory."<< endl;
    }
}

template<typename T>
string Catalog<T>::GetBookINFO()const
{
    string outStr;
    ostringstream tempOut;
    
    tempOut << booklist->GetISBN();
    outStr = tempOut.str();
    return (outStr + "\t"+ booklist->GetTitle());
}

// T Catalog<T>::PrintList()
// {
//     T item;
//     
//     for(int i =0; i<MAX_LENGTH; i++)
//     {
//         
//     }
// }

