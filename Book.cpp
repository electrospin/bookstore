#include <iostream> //for the cout statements used in debugging
#include "Book.h"
using namespace std; 

Book::Book() //defualt
{
    ISBN = 0;
    string title;
    string author;
    string edition;
    numPages = 0;
    //Date std::string yearPublished;
    cout << "Hello from book constructor." << endl;
}

//template<typename BookType>
Book::Book(unsigned long int iniISBN,string iniTitle, string iniAuthor,string iniEdition, unsigned short int iniNumPages,unsigned short int iniYearPublished)//defualt
{
    ISBN = iniISBN;
    title = iniTitle;
    author = iniAuthor;
    edition = iniEdition;
    numPages = iniNumPages;
    yearPublished = iniYearPublished;
    cout << "Hello from book Paramatrized constructor." << endl;
        
}

Book::~Book()
{
    cout << "Book destructor called " << endl;
}