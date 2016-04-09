#include <iostream>
#include "Periodic.h"
#include "Media.h"
#include <string>

using namespace std;

Periodic::Periodic(const string& callno,const string& title,const string& subject,const string& author,const string& description,const string& publisher_hist,const string& series,const string& notes,const string& related_title,const string& other_title,const string& gov_doc_no):Media(callno,title,subject,notes),author(author),description(description),publisher_hist(publisher_hist),series(series),related_title(related_title),other_title(other_title),gov_doc_no(gov_doc_no)
{}



void Periodic:: display()const
{
   cout << "Media Type     -> Periodic"<<endl;
   cout << "Call Number    ->"<<callno<<endl;
   cout << "Title          ->"<<title<<endl;
   cout << "Subject        ->"<<subject<<endl;
   cout << "author         ->"<<author<<endl;
   cout << "description    ->"<<description<<endl;
   cout << "publisher_hist ->"<<publisher_hist<<endl;
   cout << "Series         ->"<<series<<endl;
   cout << "Notes          ->"<<notes<<endl;
   cout << "Related Title  ->"<<related_title<<endl;
   cout << "Other_title    ->"<<other_title<<endl;
   cout << "Gov Doc Number ->"<<gov_doc_no<<endl;
   cout << "-----------------------------------------"<<endl;


}


bool Periodic :: compare_other(const string& keyword)const
{

   string comined_string = description +" " + notes +" " + series +" "+ related_title;


   if(comined_string.find(keyword) != string::npos)
   {
      return true;
   }
   else
   {
      return false;
   }


}


