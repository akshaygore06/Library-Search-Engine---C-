#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED
#include "Media.h"
#include <string>

using namespace std;

class Video : public Media
{
   private:
      string description, distributor,series,lable;

   public:
      Video(const string& ,const string&,const string&,const string& ,const string&,const string&,const string&,const string&);
      void display()const;
      bool compare_other(const string&) const;

};

#endif // VIDEO_H_INCLUDED
