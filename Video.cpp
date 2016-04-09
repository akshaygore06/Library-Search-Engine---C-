#include <iostream>
#include "Video.h"
#include "Media.h"
#include <string>

using namespace std;

Video::Video(const string& callno,const string& title,const string& subject,const string& description,const string& distributor,const string& notes,const string& series,const string& lable):Media(callno,title,subject,notes),description(description),distributor(distributor),series(series),lable(lable){}


void Video:: display()const
{
   cout << "Media Type     -> Video"<<endl;
   cout << "Call Number    ->"<<callno<<endl;
   cout << "Title          ->"<<title<<endl;
   cout << "Subject        ->"<<subject<<endl;
   cout << "Description    ->"<<description<<endl;
   cout << "Distributor    ->"<<distributor<<endl;
   cout << "Notes          ->"<<notes<<endl;
   cout << "Series         ->"<<series<<endl;
   cout << "Lable          ->"<<lable<<endl;
   cout << "-----------------------------------------"<<endl;

}



bool Video :: compare_other(const string& keyword)const
{

   string comined_string = description +" " + notes +" " + distributor;


   if(comined_string.find(keyword) != string::npos)
   {
      return true;
   }
   else
   {
      return false;
   }


}
