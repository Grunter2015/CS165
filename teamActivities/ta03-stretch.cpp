// CS165 Team Activity 3 - Stretch
// Written by Chad Macbeth

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

struct Scripture
{
   string book;
   int chapter;
   int startVerse;
   int endVerse;
};

// Display a scripture (constant and passed by reference)
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

// Parse the line into a scripture structure
void parseLine(const string line, Scripture &scripture)
{
   // A stringstream is a stream that is initialized with a string.
   // When we read from this stream, we will get one word at a time.
   stringstream ss(line);
   
   ss >> scripture.book;

   // If the first word is a number, then it must be something like
   // 1 Nephi or 2 Peter
   // Note, this program does not work for "Words of Mormon"
   if (isdigit((int)scripture.book[0]))
   {
      string temp;
      // Read the second part of the book name
      ss >> temp;
      scripture.book += " " + temp;
   }
   ss >> scripture.chapter;
   ss >> scripture.startVerse;

   // ss.fail will be true if any of the above "ss >>" commands failed.
   // We are assuming here that startVerse is the thing that is missing.
   if (ss.fail())
   {
      scripture.startVerse = 0;
      scripture.endVerse = 0;
   }
   else 
   {
      ss >> scripture.endVerse;
      
      // ss.fail will occur here only if the endVerse is missing
      if (ss.fail()) 
      {
         scripture.endVerse = 0;
      }
      else // Range of verses
      {
         // Verify the range is correct.  If it is not, then fix it by flipping the numbers
         if (scripture.endVerse < scripture.startVerse) 
         {
            int temp = scripture.endVerse;
            scripture.endVerse = scripture.startVerse;
            scripture.startVerse = temp;
         }
      }

   }
}

// Prompt for a file, read each line, parse the line into a Scripture
// structure, and display the scripture.
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
   while (getline(fin,line)) // read a full line
   {
      Scripture scripture;

      parseLine(line, scripture);
      display(scripture);
      cout << endl;
   }
   fin.close();
}

// Driver
int main()
{
   readFile();

   return 0;
}
