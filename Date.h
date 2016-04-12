#ifndef __DATE_H__
#define __DATE_H__

#include <ctime>
class Date
{
public:
    int GetYear();
    int GetTS();
    
private:
    Date int yearPublished;
    int timestamp; //we should use the TimeOfDay class for this
    int lastUpDate;
    
};

#endif
