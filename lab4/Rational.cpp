#include <string>
#include "Rational.h"

using namespace std;
Rational::Rational()
   : mNumerator(0), mDenominator(1) 
{

}

Rational::Rational(int numerator, int denominator)
   : mNumerator(numerator), mDenominator(denominator)
{
   Normalize();
}

void Rational::Normalize() 
{
   if (mDenominator < 0) {
      mNumerator *= -1;
      mDenominator *= -1;
   }
      
   int x = mNumerator,y = mDenominator,t;
   while (y != 0) {
      t = y;
      y = x % y;
      x = t;
   }

   mNumerator /= x;
   mDenominator /= x;
}

bool const Rational::Equals(const Rational &other) {
   return (double)mNumerator/(double)mDenominator == 
      (double)other.mNumerator/(double)other.mDenominator;
}

void Rational::SetNumerator(int newNum) {
   mNumerator = newNum;
}

void Rational::SetDenominator(int newDenom) {
   mDenominator = newDenom;
}

Rational Rational::add(const Rational &other) {
   int sumNumerator = (mNumerator * other.mDenominator) + (other.mNumerator * mDenominator);
   int sumDenominator = mDenominator * other.mDenominator;
   Rational sum(sumNumerator, sumDenominator);
   return sum;
}

string Rational::ToString() {
   if (mDenominator == 0)
      return (string)mNumerator;
}

