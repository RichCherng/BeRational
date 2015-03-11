#include "Rational.h"

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

}