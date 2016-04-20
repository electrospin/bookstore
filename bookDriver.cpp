#include <iostream>
#include <fstream>
#include <sstream>
#include "Book.h"

using namespace std;

//Book GetBookName(ifstream& BookINFO);

int main()
{
    //Book mybook("128939393","Intro to QM", "Carl Sagan","5 th ed",200,1999);
    cout <<"Here is the book info:" << endl;
    //cout << mybook.GetBookINFO();

    Book book;
    ifstream BookINFO;
    string record;
    
    BookINFO.open("books.dat");
    if(!BookINFO)
    {
        cout << "Error opening book info!" << endl;
        return 1;
    }
    
   // bookname = GetBookName(BookINFO);
   while (getline(BookINFO,record) /*&& !Cat.IsFull()*/)
    {
        stringstream ss;
        string inISBN,inTitle,inAuthor,inEdition;
        //string token;
        ss << record;
//        while( getline(ss,token,','))
//        {
//            cout << "Made it inner while loop,,, the inTitle =="<<endl;// << inTitle << endl;
//            cout << token << endl;
//            
//            inISBN = token;
//            
//            cout << "inISBN is: "<< inISBN << endl;
//            
//            
//        }
//        ss.clear();
        getline(ss,inISBN,',');
        getline(ss,inTitle, ',');
        getline(ss,inAuthor,',');
        getline(ss,inEdition,',');
        
        Book book(inISBN,inTitle,inEdition,inAuthor);
        Cat.Insert(book);
            
    }
    
//     for(string record; getline(BookINFO,record);)
//     {
//         stringstream ss;
//         ss.str(record);
//         ss >> ISBN;
//         ss >>
//     }
    book.GetBookINFO;
    BookINFO.close();
    return 0;
    
}

// Book GetBookName(ifstream& BookINFO)
// {
//     string ISBN,title;
//     BookINFO >> ISBN >> title;
//     
//     Book bookname(ISBN,title);
//     return bookname;
// }
