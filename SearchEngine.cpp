/******************
http://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c
http://stackoverflow.com/questions/19472612/getline-not-waiting-for-input-inside-switch-case-c

 ***************************/
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <stdlib.h>
#include "SearchEngine.h"
#include "Media.h"
#include "Book.h"
#include "Film.h"
#include "Periodic.h"
#include "Video.h"
#include <vector>

using namespace std;

vector <Media*>SearchEngine::Search_call_number (const string& keyword)const
{
   vector <Media*>Result;
   bool y;
   for (unsigned int i = 0; i < CardCatalog.size(); i++)
   {
      y = CardCatalog[i]->compare_callno (keyword);
      if (y)
      {
         Result.push_back (CardCatalog[i]);
      }
   }
   return Result;
}


vector <Media*> SearchEngine::Search_title(const string& keyword)const
{
   bool y;
   vector <Media*> Result;
   for (unsigned int i = 0; i < CardCatalog.size(); i++)
   {
      y = CardCatalog[i]->compare_title(keyword);
      if (y)
      {
         Result.push_back (CardCatalog[i]);
      }
   }
   return Result;
}


vector <Media*> SearchEngine::Search_subject(const string& keyword)const
{
   bool y;
   vector <Media*> Result;
   for (unsigned int i = 0; i < CardCatalog.size(); i++)
   {
      y = CardCatalog[i]->compare_subject(keyword);
      if (y)
      {
         Result.push_back (CardCatalog[i]);
      }

   }
   return Result;
}


vector <Media*> SearchEngine::Search_other(const string& keyword)const
{
cout<<"In SearchEngine:: search other"<<keyword<<endl;
   bool y;
   vector <Media*> Result;
   for (unsigned int i = 0; i < CardCatalog.size(); i++)
   {
      y = CardCatalog[i]->compare_other(keyword);
      if (y)
      {
         Result.push_back(CardCatalog[i]);
      }

   }
   return Result;
}

SearchEngine::SearchEngine ()
{
   string callno, title, subject, author, description, publisher, city, year,
          series, notes;
   string director, label, distributor, publisher_hist, related_title,
          other_title, gov_doc_no;

   Media *book_obj;
   Media *film_obj;
   Media *video_obj;
   Media *periodic_obj;


   ifstream imf;
   imf.open ("book.txt");

   while (getline (imf, callno, '|'))
   {
      getline (imf, title, '|');
      getline (imf, subject, '|');
      getline (imf, author, '|');
      getline (imf, description, '|');
      getline (imf, publisher, '|');
      getline (imf, city, '|');
      getline (imf, year, '|');
      getline (imf, series, '|');
      getline (imf, notes);

      if (imf.eof ())
      {
         break;
      }

      book_obj = new Book (callno, title, subject, author, description, publisher,city, year, series, notes);
      CardCatalog.push_back (book_obj);
   }
   imf.close ();

   imf.open ("film.txt");
   while (true)
   {
      getline (imf, callno, '|');
      getline (imf, title, '|');
      getline (imf, subject, '|');
      getline (imf, director, '|');
      getline (imf, notes, '|');
      getline (imf, year);

      if (imf.eof ())
      {
         break;
      }

      film_obj = new Film (callno, title, subject, director, notes, year);
      CardCatalog.push_back (film_obj);
   }

   imf.close ();

   imf.open ("video.txt");
   while (true)
   {
      getline (imf, callno, '|');
      getline (imf, title, '|');
      getline (imf, subject, '|');
      getline (imf, description, '|');
      getline (imf, distributor, '|');
      getline (imf, notes, '|');
      getline (imf, series, '|');
      getline (imf, label);

      if (imf.eof ())
      {
         break;
      }

      video_obj = new Video (callno, title, subject, description, distributor, notes,series, label);
      CardCatalog.push_back (video_obj);
   }

   imf.close ();

   imf.open ("periodic.txt");
   while (true)
   {
      getline (imf, callno, '|');
      getline (imf, title, '|');
      getline (imf, subject, '|');
      getline (imf, author, '|');
      getline (imf, description, '|');
      getline (imf, publisher_hist, '|');
      getline (imf, series, '|');
      getline (imf, notes, '|');
      getline (imf, related_title, '|');
      getline (imf, other_title, '|');
      getline (imf, gov_doc_no);

      if (imf.eof ())
      {
         break;
      }

      periodic_obj = new Periodic (callno, title, subject, author, description,
               publisher_hist, series, notes, related_title,
               other_title, gov_doc_no);

      CardCatalog.push_back(periodic_obj);
   }
   imf.close ();

 //  cout << "Size of CardCatalog :  "<<CardCatalog.size()<<endl;
}


SearchEngine::~SearchEngine()
{
   vector <Media*> :: iterator itr;

   for(itr=CardCatalog.begin();itr!=CardCatalog.end();itr++)
   {
      delete *itr;
   }
   CardCatalog.clear();
}
