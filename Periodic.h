#ifndef PERIODIC_H_INCLUDED
#define PERIODIC_H_INCLUDED
#include "Media.h"
#include <string>

using namespace std;

class Periodic : public Media
{
   private:
      string author,description,publisher_hist,series,related_title,other_title,gov_doc_no;

   public:

      Periodic(const string& callno,const string& title,const string& subject,const string& author,const string& description,const string& publisher_hist,const string& series,const string& notes,const string& related_title,const string& other_title,const string& gov_doc_no);

      void display()const;
      bool compare_other(const string&) const;
};

#endif // PERIODIC_H_INCLUDED
