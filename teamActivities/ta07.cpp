#include <iostream>
using namespace std;

// Core requirements
float getValueFromPointer(float* thePointer)
{
   return *thePointer;
}

float* getMinValue(float* a, float* b)
{
   if (*a <= *b)
   {
      return a;
   }
   return b;
}

// Stretch goals
void swapElements(float* theArray[], int a, int b)
{
   float *temp;
   temp = theArray[a];
   theArray[a] = theArray[b];
   theArray[b] = temp;
}

void sortArray(float* theArray[], int size)
{
   // Keep going through the loop until you can swap anymore
   bool swapped = false;
   do
   {
      swapped = false;
      for (int i=1; i<size; i++)
      {
         // Swap if the next element is smaller
         if (getMinValue(theArray[i-1], theArray[i]) == theArray[i])
         {
            swapElements(theArray,i-1,i);
            swapped = true;
         }
      }
   }
   while (swapped);
}
  

int main()
{  
   // Core Requirement 1
   int arraySize;
   cout << "Enter the array size: ";
   cin >> arraySize;

   // Allocate your array(s) here
   float *speeds = new float[arraySize];
   float **speedsPtr = new float*[arraySize];  // Stretch 1

   // Fill your array with float values
   for(int i = 0; i < arraySize; i++) 
   {
      cout << "Enter a float value: ";
      cin >> speeds[i]; 
      speedsPtr[i] = speeds+i; // Stretch 1
      // speedsPtr[i] = &speeds[i];
          
   }

   // Core Requirement 2
   for (int i = 0; i < arraySize; i++)
   {
      float value = getValueFromPointer(speeds+i);
      cout << "The value of the element " << i << " is: ";
      cout << value << endl;
   }

   // Core Requirement 3
   // Print the smaller of the first and last elements of the array
   float *pointerToMin = getMinValue(speeds, speeds+arraySize-1);
   // float *pointerToMin = getMinValue(&speeds[0], &speeds[arraySize - 1]);
   cout << getValueFromPointer(pointerToMin) << endl; 
   //cout << *pointerToMin;

   // Stretch 1 
   for (int i=0; i<arraySize; i++)
   {
      cout << "speeds = " << *(speeds+i) << " speedsPtr = " << *(speedsPtr+i) << endl;
      //cout << "speeds = " << speeds[i] << " speedsPtr = " << speedsPtr[i] << endl;
   }
   // Stretch 2
   swapElements(speedsPtr, 0, arraySize-1);
   for (int i=0; i<arraySize; i++)
   {
      cout << "speeds = " << *(speeds+i) << " speedsPtr = " << *(speedsPtr+i) << endl;
      //cout << "speeds = " << speeds[i] << " speedsPtr = " << speedsPtr[i] << endl;
   } 

   // Stretch 3
   sortArray(speedsPtr, arraySize);
   for (int i=0; i<arraySize; i++)
   {
      cout << **(speedsPtr+i) << endl;
      //cout << *(speedsPtr[i]) << endl;
   }

   delete [] speeds;
   delete [] speedsPtr; // Stretch 1

   return 0;
}

