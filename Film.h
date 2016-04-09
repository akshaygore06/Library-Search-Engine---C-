#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED
#include "Media.h"
#include<string>

using namespace std;

class Film : public Media
{
   private:
      string director,year;

   public:
      Film(const string& callno,const string& title,const string& subject,const string& director,const string& notes,const string& year);
      void display()const;
      bool compare_other(const string&) const;
};

#endif // FILM_H_INCLUDED
