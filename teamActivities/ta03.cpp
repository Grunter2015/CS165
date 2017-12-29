// CS165 Team Activity 3
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
void parseLine(const string &line, Scripture &scripture)
{
   // A stringstream is a stream that is initialized with a string.
   // When we read from this stream, we will get one word at a time.
   stringstream ss(line);
   
   ss >> scripture.book;
   ss >> scripture.chapter;
   ss >> scripture.startVerse;
   ss >> scripture.endVerse;
      
   // ss.fail will occur if any of the "ss >>" above failed.
   // We are assuming that this will only happen if the endVerse was missing. 
   if (ss.fail()) 
   {
      scripture.endVerse = 0;
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
