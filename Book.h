#ifndef __BOOK_H_INCLUDED__
#define __BOOK_H_INCLUDED__

#include <string>
using namespace std;

//template<typename Obj>
class Book
{
public:
    Book();
    Book(unsigned long int iniISBN,string iniTitle, string iniAuthor,string iniEdition, unsigned short int iniNumPages,unsigned short int iniYearPublished);
    ~Book();
    
private:
    unsigned long int ISBN;
    string title;
    string author;
    string edition;
    unsigned short int numPages;
    unsigned short int yearPublished;
};

#endif

