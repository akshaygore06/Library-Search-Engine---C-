#include <iostream>
#include "Film.h"
#include "Media.h"
#include <string>
using namespace std;


Film::Film(const string& callno,const string& title,const string& subject,const string& director,const string& notes,const string& year): Media(callno,title,subject,notes),director(director),year(year){

}

void Film::display()const
{

   cout << "Media Type  -> Film"<<endl;
   cout << "Call Number ->"<< callno<<endl;
   cout << "Title       ->"<< title <<endl;
   cout << "Subject     ->"<<subject<<endl;
   cout << "Notes       ->"<<notes<<endl;
   cout << "Director    ->"<<director<<endl;
   cout << "Year        ->"<<year<<endl;
   cout << "-----------------------------------------"<<endl;

}



bool Film :: compare_other(const string& keyword)const
{

   string comined_string =  notes +" " + director +" " + year;


   if(comined_string.find(keyword) != string::npos)
   {
      return true;
   }
   else
   {
      return false;
   }


}



