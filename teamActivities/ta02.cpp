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

void promptScripture(Scripture &scripture)
{
   cout << "Book: ";
   getline(cin,scripture.bookName);
   cout << "Chapter: ";
   cin >> scripture.chapter;
   cout << "Verse: ";
   cin >> scripture.verse;
   cin.ignore(); // Ignore the \n from the previous cin
}

void promptInsight(Insight &insight)
{
    promptScripture(insight.scripture);
    cout << "Message: ";
    getline(cin, insight.message);
}

void displayScripture(const Scripture &scripture)
{
   cout << scripture.bookName << " " << scripture.chapter 
        << ":" << scripture.verse << endl;
}    

void displayInsight(const Insight &insight)
{
   displayScripture(insight.scripture);
   cout << "Message: " << insight.message << endl;
}

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
