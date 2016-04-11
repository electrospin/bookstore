#ifndef __CATALOG_H_INCLUDED__
#define __CATALOG_H_INCLUDED__

#include "Book.h"
const int MAX_LENGTH = 100;
template<typename Book>
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
   
   void Insert(const Book &item);
   void Delete(const Book &item);
   void ResetList();
   Book GetNextItem();
   
   // our book catalog will be a collection of an array of Type Book
    
private: 
    //member array variable of a list of books
    Book books[];//array of Book type objects
    unsigned long int numbooks; // length of the Book list[];
    unsigned long int currentPos;
    
    
};

#endif

