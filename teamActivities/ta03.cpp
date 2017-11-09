/**********************************************************************
 * File: ta03.cpp
 * Author: Bro Macbeth 
 *
 * Description: Use this file as a starting point for Team Activity 03.
 *    You do not need to "submit" your code, but rather, answer the
 *    questions in the I-Learn assessment.
 **********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

/***********************************************************************
 * Struct: Scripture
 * Description: Holds the reference to a scripture (book, chapter, verse
 ***********************************************************************/
struct Scripture
{
   string book;
   int chapter;
   int startVerse;
   int endVerse;
};

/***********************************************************************
 * Function: display
 * Description: Displays the passed scripture.
 ***********************************************************************/
void display(const Scripture &scripture)
{
   cout << scripture.book << " ";
   cout << scripture.chapter;
   if (scripture.startVerse > 0)
   {
      cout << ":";
      cout << scripture.startVerse;
      if (scripture.endVerse > 0)
      {
         cout << "-" << scripture.endVerse;
      }
   }
}

void parseLine(const string line, Scripture &scripture)
{
   stringstream ss(line);
   
   ss >> scripture.book;
   if (isdigit((int)scripture.book[0]))
   {
      string temp;
      ss >> temp;
      scripture.book += " " + temp;
   }
   ss >> scripture.chapter;
   ss >> scripture.startVerse;
   if (ss.fail())  // No verses
   {
      scripture.startVerse = 0;
      scripture.endVerse = 0;
   }
   else 
   {
      ss >> scripture.endVerse;
      if (ss.fail()) // Single verse 
      {
         scripture.endVerse = 0;
      }
      else // Range of verses
      {
         if (scripture.endVerse < scripture.startVerse) // Invalid range
         {
            int temp = scripture.endVerse;
            scripture.endVerse = scripture.startVerse;
            scripture.startVerse = temp;
         }
      }

   }
}

void readFile()
{
   string filename;
   string line;

   cout << "Filename: ";
   cin >> filename;

   ifstream fin(filename.c_str());
   if (fin.fail())
   {
      cout << "Error opening file.\n";
      return;
   }
   while (getline(fin,line))
   {
      Scripture scripture;

      parseLine(line, scripture);
      display(scripture);
      cout << endl;
   }
   fin.close();
}


/***********************************************************************
 * Function: main
 * Description: The driver for the program.
 ***********************************************************************/
int main()
{
   // Insert your code here to prompt for the name of a file
   // and pass it to a readFile function
   readFile();

   return 0;
}
