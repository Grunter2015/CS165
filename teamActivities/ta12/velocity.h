#ifndef VELOCITY_H
#define VELOCITY_H

#include <cmath>
#include <iostream>

using namespace std;

class Velocity
{
private:
   float dx;
   float dy;

public:
   /**************************
    * Getters and Setters
    **************************/
   float getDx() const { return dx; }
   float getDy() const { return dy; }

   void setDx(float dx) { this->dx = dx; }
   void setDy(float dy) { this->dy = dy; }

   /**************************
    * Public member functions
    **************************/
   void prompt();
   void display() const;

   Velocity& operator ++();
   Velocity operator ++(int postfix);

   inline friend Velocity operator -(const Velocity &lhs, const Velocity &rhs)
   {
      Velocity result;
      result.dx = lhs.dx - rhs.dx;
      result.dy = lhs.dy - rhs.dy;
      return result;
   }

   inline friend Velocity& operator -=(Velocity &lhs, const Velocity &rhs)
   {
      lhs.dx -= rhs.dx;
      lhs.dy -= rhs.dy;
      return lhs;
   }
  
};

// Compare both sides
inline bool operator ==(const Velocity &lhs, const Velocity &rhs) 
{
   float dxDiff = fabs(lhs.getDx()-rhs.getDx());
   float dyDiff = fabs(lhs.getDy()-rhs.getDy());
   return ((dxDiff <= 0.001) && (dyDiff <= 0.001));
}

// Opposite of ==
inline bool operator !=(const Velocity &lhs, const Velocity &rhs)
{
   return !(lhs == rhs);
}

// Compare magnitudes of both sides
inline bool operator >(const Velocity &lhs, const Velocity &rhs)
{
   float mag1 = sqrt(lhs.getDx()*lhs.getDx() + lhs.getDy()*lhs.getDy());
   float mag2 = sqrt(rhs.getDx()*rhs.getDx() + rhs.getDy()*rhs.getDy());
   return (mag1 > mag2);
}

// Compare magnitudes of both sides
inline bool operator <(const Velocity &lhs, const Velocity &rhs)
{
   float mag1 = sqrt(lhs.getDx()*lhs.getDx() + lhs.getDy()*lhs.getDy());
   float mag2 = sqrt(rhs.getDx()*rhs.getDx() + rhs.getDy()*rhs.getDy());
   return (mag1 < mag2);
}

// Opposite of <
inline bool operator >=(const Velocity &lhs, const Velocity &rhs)
{
   return !(lhs < rhs);
}

// Opposite of >
inline bool operator <=(const Velocity &lhs, const Velocity &rhs)
{
   return !(lhs > rhs);
}

// Output Stream
inline ostream& operator <<(ostream &lhs, const Velocity &rhs)
{
   lhs << "(dx=" << rhs.getDx() << ", dy=" << rhs.getDy() << ")";
   return lhs;
}

// Input Stream
inline istream& operator >>(istream &lhs, Velocity &rhs)
{
   float dx = 0.0;
   float dy = 0.0;
   lhs >> dx >> dy;
   rhs.setDx(dx);
   rhs.setDy(dy);
   return lhs;
}

inline Velocity operator +(const Velocity &lhs, const Velocity &rhs)
{
   Velocity result;
   result.setDx(lhs.getDx() + rhs.getDx());
   result.setDy(lhs.getDy() + rhs.getDy());
   return result;
}

inline Velocity& operator +=(Velocity &lhs, const Velocity &rhs)
{
   lhs.setDx(lhs.getDx() + rhs.getDx());
   lhs.setDy(lhs.getDy() + rhs.getDy());
   return lhs;
}


#endif
