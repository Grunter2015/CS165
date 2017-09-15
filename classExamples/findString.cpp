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

/* To find a string, the function will first loop through each scripture.
 * The function will then look for a match of the first character of the 
 * target text.  If it finds a match, then it will look for a match for the
 * second character.  This will continue until all letters in the target
 * text have been matched in order.  
 */
void FindString(const string scriptures[], const int size, const string text)
{
   int textPos = 0;

   for (int i=0; i<size; i++)
   {
      textPos = 0;
      for (int j=0; j<scriptures[i].length(); j++)
      {
         cout << i << " " << j << " " << scriptures[i][j] << " == " << textPos << text[textPos] << endl;
         if (tolower(scriptures[i][j]) == tolower(text[textPos]))
         {
            textPos++;
            if (textPos == text.length())
            { 
               cout << scriptures[i] << endl;
               break;
            }
         }
         else
         {
            textPos = 0;
         }
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
      "clothe yourselves with the bond of charity",
   };

   //FindChar(scriptures, SCRIPTURE_SIZE, 'c'); 
   
   FindString(scriptures, SCRIPTURE_SIZE, "charity"); 

   return 0;
}
