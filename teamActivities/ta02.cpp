// CS165 - Team Activity 02
// Written by Chad Macbeth

#include <iostream>
#include <string>

using namespace std;

struct Scripture
{
   string bookName;
   int chapter;
   int verse;
};

// Prompt for scripture
void promptScripture(Scripture &scripture)
{
   cout << "Book: ";
   cin >> scripture.bookName;
   cout << "Chapter: ";
   cin >> scripture.chapter;
   cout << "Verse: ";
   cin >> scripture.verse;
}

// Display Scripture
void displayScripture(const Scripture &scripture)
{
   cout << scripture.bookName << " " << scripture.chapter 
        << ":" << scripture.verse << endl;
}    

// Driver
int main()
{
   Scripture scripture;
   promptScripture(scripture);
   displayScripture(scripture);

   return 0;
}
