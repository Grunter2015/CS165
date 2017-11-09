/***********************************************************************
* Program:
*    Checkpoint 4A, Classes  
*    Brother Macbeth, CS165
* Author:
*    Chad Macbeth
* Summary: 
*    Create a book class
************************************************************************/

#include <iostream>
using namespace std;

class Book
{
   private:
      string title;
      string author;

   public:
      void prompt();
      void display() const;
};

/**********************************************************************
 * Prompt for data in the Book
 * ********************************************************************/
void Book::prompt()
{
   cout << "Title: ";
   getline(cin, title);
   cout << "Author: ";
   getline(cin, author);
}

/**********************************************************************
 * Display the data in the Book
 * ********************************************************************/
void Book::display() const
{
   cout << "\"" << title << "\" by " << author << endl; 
}

/**********************************************************************
 * Demonstrate the use of the Book class
 ***********************************************************************/
int main()
{
   Book myBook;

   myBook.prompt();
   myBook.display();
      
   return 0;
}
