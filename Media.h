#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED
#include <string>
#include <vector>

using namespace std;

class Media{

   protected:
      string callno,title,subject,notes;

   public:

      Media();
      virtual ~Media();
      Media(const string&,const string&,const string&,const string&);
      bool compare_callno(const string&)const;
      bool compare_title(const string&)const;
      bool compare_subject(const string&)const;
      virtual bool compare_other(const string&)const;
      virtual void display() const;

};

#endif // MEDIA_H_INCLUDED
