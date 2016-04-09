#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include "Media.h"
#include<string>

using namespace std;

class Book : public Media
{
   private:
      string author,description,publisher,city,year,series;

   public:

      Book(const string& callno,const string& title,const string& subject,const string& author,const string& description,const string& publisher,const string& city,const string& year,const string& series,const string& notes);

      void display()const;
      bool compare_other(const string&)const;
};

#endif // BOOK_H_INCLUDED
