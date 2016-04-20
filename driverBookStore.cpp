#include <iostream>
#include <cstdlib>
#include "Catalog.h"
#include "Catalog.cpp"
#include "Book.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Book GetBookName(ifstream& BookINFO);
void displayMenu();
void OptionSearch(const Catalog<Book>& );


int main ()
{
    bool anotherRound=true;
    bool menuActive;
    char menuChoice;
    Catalog<Book> Cat;
    Book bookItem;
    ifstream BookINFO;
    string record;
	char response;
	char ch;
	
    BookINFO.open("books.dat");
    if(!BookINFO)
    {
        cout << "Error opening book info!" << endl;
        return 1;
    }
    
    
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
        
        Book bookItem(inISBN,inTitle,inEdition,inAuthor);
        Cat.Insert(bookItem);
            
    }
    
    cout << "Hello from main(),...the length is : " << Cat.GetLength() << endl;
    
    
    while(anotherRound)
    {
        menuActive=true;
        while(menuActive)
        {
            displayMenu();
            cout << "enter menu choice: " << endl;
            cin >> menuChoice; cin.ignore(80,'\n');// flush the input stream
            switch(menuChoice)
            {
                case '1': case 'S': case 's':
					OptionSearch(Cat);
				case 'Q':case 'q':
			menuActive=false;
			break;
					default:
		     cout << "       Invalid menu choice: try again!" << endl << endl;
            }
            
        }//end of while menu active loop
        cout << "Menu exited. Do you wish to go back to Main menu?";
		cin >> response;cin.get(ch);
		if(response =='n'|| response =='N')
			anotherRound=false;
		
    }
    
    BookINFO.close();

    return 0;
}

void OptionSearch(const Catalog<Book>& Cat)
{
	bool menuActive2 = true;
	char searchOption;
	string usrISBN,usrTitle;
	// Put the follwoing in it's appropriate switch statement.
    
	cout << "Search Options " << endl;
	cout << "To search by ISBN number, please press 1:" << endl;
	cout << "To search by Title, please press 2 :" << endl;
    //cout << "To search by TITLE, please enter it:  " << endl;
   
	cin >> searchOption; cin.ignore(80,'\n');
	switch(searchOption)
	{
		case '1' : case 'I':
			cout << "Enter ISBN: " << endl;
			cin >> usrISBN; cin.ignore(80,'\n');
			Cat.SearchByISBN(usrISBN);
			break;
		case '2' : case 'A':
			cout << "Enter title:" << endl;
			cin >> usrTitle; cin.ignore(80,'\n');
			Cat.SearchByTitle(usrTitle);
			break;
		case 'Q':case 'q':
			menuActive2=false;
			break;
			
		default:
		  cout << "       Invalid menu choice: try again!" << endl << endl;
	}
	
// 	string usrISBN;
// 
//     cin >> usrISBN;
// 
//     Cat.SearchByISBN(usrISBN);
//     cout << "In theory this should be your info." << endl;
//     cout << Cat.SearchByISBN(usrISBN) << endl;
//     
    //cin >> usrTitle;
    //Cat.SearchByTitle(usrTitle);
    
    //cout << Cat.SearchByISBN(usrTitle) << endl;
}

void displayMenu() 
{
   cout << "   ****************************************************" << endl;
   cout << "   *                                                  *" << endl;
   cout << "   *           M A I N    M E N U                     *" << endl;
   cout << "   *                                                  *" << endl;
   cout << "   *   1) Option 1: Search for a book.                *" << endl;
   cout << "   *   2) Option 2: Purchase a book.                  *" << endl;
   cout << "   *   3) Option 3: Update something that needs a TS                  *" << endl;
   cout << "   *   4) option 4:   *" << endl;
   cout << "   *   5) option 5:               *" << endl;
   cout << "   *   6) (Q)uit: Finish processing data              *" << endl;
   cout << "   *                                                  *" << endl;
   cout << "   ***************************************************" << endl;
   cout << "       Enter choice: ";
}


// Book GetBookName(ifstream& BookINFO)
// {
//        //istringstream record(BookINFO);
//        int inISBN;
//        //array<char,10> a;
//        //string inISBN; 
//        string inTitle, inAuthor,inEdition;
//        //stringstream ss;//(rec);
//        //ss.str(rec);
//         //ss >> inISBN;
//        
//        BookINFO >> inISBN ;//>> inTitle;
//        //BookINFO.getline(inTitle,',');
//          BookINFO.ignore(10,',');
// //         getline(BookINFO,inTitle, ',');
// //         getline(BookINFO,inAuthor,',');
// //         getline(BookINFO,inEdition,',');
//         
// //         int numISBN = atoi(BookINFO);
//         Book bookItem(inISBN,inTitle,inEdition,inAuthor);
//         
//         return bookItem;
//     //}
//     
// }