#ifndef __CATALOG_H_INCLUDED__
#define __CATALOG_H_INCLUDED__

#include "Book.h"
const int MAX_LENGTH = 6;
template<typename T>
class Catalog
{
    //Book item;
public:
    Catalog();
    Catalog(unsigned long int iniNumbooks,unsigned long int iniCurrentPos);
   ~Catalog();
   bool IsEmpty() const;
   bool IsFull() const;
   int GetLength()const;
   void Insert(const T& item);
   void Delete(const T& item);
   void ResetList();
   T GetNextItem();
   string SearchByTitle(string catTitle)const;
   string SearchByISBN(string catISBN)const;
   string GetBookINFO() const;// returns all of the book's info: title,author etc #we should nest this method inside the Search methods#
   
   // our book catalog will be a collection of an array of Type Book
    
private: 
    //member array variable of a list of books
    Book* booklist;//array of Book type objects
    string keyTitle;
    int keyISBN;
    struct Department
    {
        string DepName;
        
    };
    unsigned long int numbooks; // length of the Book list[];
    unsigned long int currentPos;
};
//#include "Catalog.cpp"

#endif

//have a member variable of structs ()
// Hi Stuart,

//Sorry, I really meant to catch you after the 5020 class and ask you about how you have structured you Catalog class.
