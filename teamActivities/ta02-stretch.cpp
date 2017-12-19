// CS165 - Team Activity 02 - Stretch
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

struct Insight
{
    Scripture scripture;
    string message;
};

// Prompt for a scripture
void promptScripture(Scripture &scripture)
{
   cout << "Book: ";
   getline(cin,scripture.bookName);  // Includes spaces
   cout << "Chapter: ";
   cin >> scripture.chapter;
   cout << "Verse: ";
   cin >> scripture.verse;
   cin.ignore(); // Ignore the \n from the previous cin
}

// Prompt for a scripture and an insight
void promptInsight(Insight &insight)
{
    promptScripture(insight.scripture);
    cout << "Message: ";
    getline(cin, insight.message);
}

// Display scripture
void displayScripture(const Scripture &scripture)
{
   cout << scripture.bookName << " " << scripture.chapter 
        << ":" << scripture.verse << endl;
}    

// Display scripture and insight
void displayInsight(const Insight &insight)
{
   displayScripture(insight.scripture);
   cout << "Message: " << insight.message << endl;
}

// Driver
int main()
{
   Scripture scripture[3];

   for (int i=0; i<3; i++)
   {
      promptScripture(scripture[i]);
   }
   for (int j=0; j<3; j++)
   {
      displayScripture(scripture[j]);
   }

   Insight insight;

   promptInsight(insight);
   displayInsight(insight);

   return 0;
}
