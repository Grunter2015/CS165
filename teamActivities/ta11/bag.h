#ifndef BAG_H
#define BAG_H

/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
template<class T>
class Bag
{
private:
   int capacity;
   int size;
   int currentAddIndex;
   T* data;

public:
   Bag();
   int getCapacity();
   int getCount();
   T getItem(int index);
   void addItem(T item);
   int find(T item);   
   void deleteItem(int index);     
};

template<class T>
Bag<T>::Bag()
{
   data = new T[5];
   capacity = 5;
   currentAddIndex = 0;
}

template<class T>
int Bag<T>::getCapacity()
{
   return capacity;
}

template<class T>
int Bag<T>::getCount()
{
   return currentAddIndex;
}

template<class T>
T Bag<T>::getItem(int index)
{
   // A little bit of error checking
   if (index >= 0 && index < capacity)
   {
      return data[index];
   }
   return 0;
}

template<class T>
void Bag<T>::addItem(T item)
{
   if (currentAddIndex < capacity)
   {
      data[currentAddIndex] = item;
      currentAddIndex++;
   }
   else
   {
      // Create bigger bag
      T* newData = new T[capacity+5];
      
      // Copy from previous bag
      for (int i=0; i<capacity; i++)
      {
         newData[i] = data[i];
      }

      // Delete new bag
      delete [] data;
      
      // Point to new bag and update capacity
      data = newData;
      capacity += 5;
      
      // Add item to new bag
      data[currentAddIndex] = item;
      currentAddIndex++;
   }
}

template<class T>
int Bag<T>::find(T item)
{
   for (int i=0; i<currentAddIndex; i++)
   {
      if (data[i] == item)
      {
         return i;
      }
   }
   return -1; // Didn't find it
}

template<class T>
void Bag<T>::deleteItem(int index)
{
   if (index < currentAddIndex)
   {
      for (int i=index; i<currentAddIndex-1; i++)  // Move everything down one
      {
         data[i] = data[i+1];
      }
      currentAddIndex--;
   }
} 

#endif

