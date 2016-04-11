#ifndef __CATALOG_H_INCLUDED__
#define __CATALOG_H_INCLUDED__

#include "Book.h"

//template<typename BookType>
class Catalog
{
public:
    Catalog();
    
    
    //we dont need a parametrized consructor as the size of the catalog will grow (size will be increased by )
//     Catalog(unsigned long int iniNumbooks,unsigned long int iniCurrentPos);

   ~Catalog();
    
private: 
    //member array variable of a list of books
    Book books[];//array of Book type objects
    unsigned long int numbooks; // length of the Book list[];
    unsigned long int currentPos;
    
    
};

#endif

