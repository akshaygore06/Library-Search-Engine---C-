#ifndef SEARCHENGINE_H_INCLUDED
#define SEARCHENGINE_H_INCLUDED

#include <iostream>
#include <string>
#include "Media.h"
#include <vector>
#include "Book.h"
#include "Film.h"
#include "Periodic.h"
#include "Video.h"


class SearchEngine
{
   private:

      vector <Media*> CardCatalog;
   public :

      SearchEngine();
      ~SearchEngine();
      vector <Media*> Search_call_number(const string&)const;
      vector <Media*> Search_title(const string&)const;
      vector <Media*> Search_subject(const string&)const;
      vector <Media*> Search_other(const string&)const;

 };




#endif // SEARCHENGINE_H_INCLUDED
