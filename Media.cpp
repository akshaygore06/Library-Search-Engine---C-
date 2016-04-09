#include <iostream>
#include "Media.h"

using namespace std;

Media :: ~Media()
{

}

Media :: Media(const string& callno,const string& title,const string& subject,const string& notes): callno(callno),title(title),subject(subject),notes(notes)
{

}


bool Media :: compare_callno(const string& keyword)const
{

   if(callno.find(keyword) != string::npos)
   {
      return true;
   }
   else
   {
      return false;
   }

}


bool Media :: compare_title(const string& keyword)const
{

   if(title.find(keyword) != string::npos)
   {
      return true;
   }
   else
   {
      return false;
   }

}

bool Media :: compare_subject(const string& keyword)const
{

   if(subject.find(keyword) != string::npos)
   {
      return true;
   }
   else
   {
      return false;
   }

}

bool Media :: compare_other(const string& keyword)const
{
   return false;
}

void Media :: display()const
{

}

