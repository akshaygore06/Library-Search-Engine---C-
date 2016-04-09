#include "Book.h"
#include "Media.h"
#include <iostream>
#include <string>

using namespace std;

Book::Book(const string& callno,const string& title,const string& subject,const string& author,const string& description,const string& publisher,const string& city,const string& year,const string& series,const string& notes):Media(callno,title,subject,notes), author(author),description(description),publisher(publisher),city(city),year(year),series(series)
{

}

void Book :: display()const
{
   cout << "Media Type   -> Book"<<endl;
   cout << "Call Number  ->"<<callno<<endl;
   cout << "Title        ->"<<title<<endl;
   cout << "Subject      ->"<<subject<<endl;
   cout << "Author       ->"<<author<<endl;
   cout << "Description  ->"<<description<<endl;
   cout << "Publisher    ->"<<publisher<<endl;
   cout << "City         ->"<<city<<endl;
   cout << "Year         ->"<<year<<endl;
   cout << "Series       ->"<<series<<endl;
   cout << "Notes        ->"<<notes<<endl;
   cout << "-----------------------------------------"<<endl;

}

//bool Book :: compare_other(const string& keyword)const
//{
//   if(description.find(keyword) != string::npos)
//   {
//      return true;
//   }
//   else if(notes.find(keyword) != string::npos)
//   {
//      return true;
//   }
//   else if(year.find(keyword) != string::npos)
//   {
//      return true;
//   }
//   else
//   {
//      return false;
//   }
//
//}



bool Book :: compare_other(const string& keyword)const
{

   string comined_string = description +" " + notes  +" "+ year;

   if(comined_string.find(keyword) != string::npos)
   {
      return true;
   }
   else
   {
      return false;
   }

}

