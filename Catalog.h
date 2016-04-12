#ifndef __CATALOG_H_INCLUDED__
#define __CATALOG_H_INCLUDED__

#include "Book.h"
const int MAX_LENGTH = 100;
template<typename T>
class Catalog
{
    //Book item;
public:
    Catalog();
    //we dont need a parametrized consructor as the size of the catalog will grow (size will be increased by )
    Catalog(unsigned long int iniNumbooks,unsigned long int iniCurrentPos);
   ~Catalog();
   bool IsEmpty() const;
   bool IsFull() const;
   int GetLength()const;
   
   void Insert(const T& item);
   void Delete(const T& item);
   void ResetList();
   T GetNextItem();
   
   // our book catalog will be a collection of an array of Type Book
    
private: 
    //member array variable of a list of books
    //Book books[MAX_LENGTH];//array of Book type objects
    Book *book
    unsigned long int numbooks; // length of the Book list[];
    unsigned long int currentPos;
    
    
};
//#include "Catalog.cpp"

#endif

