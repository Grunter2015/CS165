#include <iostream>
#include <string>

using namespace std;

#define SCRIPTURE_SIZE 5

bool charExists(const string scripture, const char target)
{
   for (int i=0; i<scripture.length(); i++)
   {
      if (tolower(scripture[i]) == tolower(target))
      {
          return true;
      }
   }
   return false;
}

void FindChar(const string scriptures[] , const int size, const char target)
{
   for (int i=0; i<size; i++)
   {
      if (charExists(scriptures[i], target))
      {
         cout << scriptures[i] << endl;
      }
   }
}
 

int main()
{
   string scriptures[SCRIPTURE_SIZE] = {
      "I will go and do the things which the Lord hath commanded",
      "Except men have charity they are nothing",
      "Charity never faileth",
      "For the natural man is an enemy to God",
      "clothe yourselves with the bond of charity"
   };

   FindChar(scriptures, SCRIPTURE_SIZE, 'c'); 

   return 0;
}
