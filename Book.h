#ifndef __BOOK_H_INCLUDED__
#define __BOOK_H_INCLUDED__
#include <string>
using namespace std;
class Book
{
public:
    Book();
    Book(string iniISBN,string iniTitle,string iniEdition, string iniAuthor); /*string iniAuthor,string iniEdition, unsigned short int iniNumPages,unsigned short int iniYearPublished);*/
    ~Book();
    
    string GetISBN()const;
    string GetTitle ()const;
    string GetBookINFO()const;
    
private:
    string  ISBN;
    string title;
    string author;
    string edition;
    unsigned short int numPages;
    unsigned short int yearPublished;
};

#endif

