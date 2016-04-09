#include <iostream>
#include <fstream>
#include <string>
#include "SearchEngine.h"

using namespace std;


int main()
{
   int choice;
   string keyword;
   string keyword2;
   Media *media_Mo;
   SearchEngine se;
   vector<Media*> search_result;
   vector <Media*> ::iterator itr1;
   bool flag=true;
   while(flag)
   {
      cout << "Welcome to the Library Search Engine \n"<<endl;
      cout << "------------------------------------"<<endl;
      cout << "1. Search by Call Number "<<endl;
      cout << "2. Search by Title "<<endl;
      cout << "3. Search by Subject "<<endl;
      cout << "4. Search by Other "<<endl;
      cout << "5. Quit "<<endl;
      cout << "\n Enter your Choice :  "<<endl;

      cin >> choice;

      switch(choice)
      {
         case 1 :
            cout <<"Enter the word to search :   "<<endl;
            std::cin.ignore();
            getline(cin,keyword);
            search_result = se.Search_call_number(keyword);

            for(itr1 = search_result.begin(); itr1 < search_result.end();itr1++)
            {
               media_Mo = *itr1;
               media_Mo->display();
            }
            //cout << "Size of Search Result"<<search_result.size()<<endl;
            break;

         case 2 :
            cout <<"Enter the word to search :    "<<endl;

            std::cin.ignore();
            getline(cin,keyword);
            search_result = se.Search_title(keyword);

            for(itr1 = search_result.begin(); itr1 < search_result.end();itr1++)
            {
               media_Mo = *itr1;
               media_Mo->display();
            }

            //cout << "Size of Search Result"<<search_result.size()<<endl;
            break;
         case 3 :
            cout <<"Enter the word to search :    "<<endl;

            std::cin.ignore();
            getline(cin,keyword);
            search_result = se.Search_subject(keyword);

            for(itr1 = search_result.begin(); itr1 < search_result.end();itr1++)
            {
               media_Mo = *itr1;
               media_Mo->display();
            }

            //cout << "Sire od Search Result"<<search_result.size()<<endl;
            break;
         case 4 :
            cout <<"Enter the word to search :   "<<endl;
            std::cin.ignore();
            getline(cin,keyword);
            search_result = se.Search_other(keyword);

            for(itr1 = search_result.begin(); itr1 < search_result.end();itr1++)
            {
               media_Mo = *itr1;
               media_Mo->display();
            }

            //cout << "Size of Search Result"<<search_result.size()<<endl;
            break;

         case 5 :

            flag=false;
            return 0;

         default:
            //std::cin.ignore();
            //flag= true;
            return 0;

      }

   }
   return 0;
}
