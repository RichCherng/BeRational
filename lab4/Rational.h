#include <iostream>
#include <string>

class Rational {
   int mNumerator;
   int mDenominator;
   
   void Normalize();

public:
   Rational();

   Rational(int numerator, int denominator);

   int GetNumerator() const;
   int GetDenominator() const;

   void SetNumerator(int newNum);
   void SetDenominator(int newDenom);

   bool const Equals(const Rational &other);

   Rational add(const Rational &other);

   std::string ToString();

};