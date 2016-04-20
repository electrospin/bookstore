#include <iostream> //for the cout statements used in debugging
#include "Book.h"
#include <sstream>
using namespace std; 

Book::Book() //defualt
{
    ISBN ;
    title;
    author;
    edition;
    numPages = 0;
    //Date std::string yearPublished;
    cout << "Hello from book constructor." << endl;
}

//template<typename BookType>
Book::Book(string iniISBN,string iniTitle,string iniEdition, string iniAuthor) /*string iniAuthor,string iniEdition, unsigned short int iniNumPages,unsigned short int iniYearPublished)//defualt*/
{
    ISBN = iniISBN;
    title = iniTitle;
    author = iniAuthor;
    edition = iniEdition;
//     /*numPages = iniNumPages;
//     yearPublished = iniYearPublished;
//     cout << "Hello from book Paramatri*/zed constructor." << endl;
        
}

Book::~Book()
{
   cout << "Book destructor called " << endl;
}
string Book::GetISBN()const
{
    return ISBN;
}

string Book::GetTitle()const
{
    return title;
}


string Book::GetBookINFO()const
{
//     string outStr;
//     ostringstream tempOut;
//     
//     tempOut << GetISBN();
//     outStr = tempOut.str();
    return (GetISBN() +""+ GetTitle());

}

// void Book::PrintList()
// {
//     cout << "I need to finish emplenting this method." << endl;
//    //for (int i=0; i<books.size)
// }
//     