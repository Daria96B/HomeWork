#include <iostream>
#include <string>
using namespace std;

class Fraction
{
	int numerator;
	int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
        if (denominator == 0) {
            cout << "Error. Denomenator=0 " << endl;
        }
    }
   
    void setNumerator(int numerator) {
        this->numerator = numerator;
    }
    void setDenominator(int denominator) {
        this->denominator = denominator;
    }
    int getNumerator() {
        return this->numerator;
    }
    int getDenominator() {
        return this->denominator;
    }
   
     Fraction operator+(const Fraction& fraction) {
         int newNumerator;
         int newDenominator;
         if (this->denominator == fraction.denominator) {
             newNumerator = this->numerator + fraction.numerator;
             newDenominator = this->denominator;
         }
         else
         {
             newNumerator = (this->numerator * fraction.denominator) + (fraction.numerator * this->denominator);
             newDenominator = this->denominator * fraction.denominator;
         }

         Fraction newFraction(newNumerator, newDenominator);
         return newFraction;
     }

     Fraction operator-(const Fraction& fraction) {
         int newNumerator;
         int newDenominator;
         if (this->denominator == fraction.denominator) {
             newNumerator = this->numerator - fraction.numerator;
             newDenominator = this->denominator;
         }
         else
         {
             newNumerator = (this->numerator * fraction.denominator) - (fraction.numerator * this->denominator);
             newDenominator = this->denominator * fraction.denominator;
         }

         Fraction newFraction(newNumerator, newDenominator);
         return newFraction;
     }

     Fraction operator*(const Fraction& fraction)
{
    int newNumerator = this->numerator * fraction.numerator;
    int newDenominator = this->denominator * fraction.denominator;
    Fraction newFraction(newNumerator, newDenominator);
    return newFraction;
}
     Fraction operator/(const Fraction& fraction)
     {
         int newNumerator = this->numerator * fraction.denominator;
         int newDenominator = this->denominator * fraction.numerator;
         Fraction newFraction(newNumerator, newDenominator);
         return newFraction;
     }
     void showAll() {
         cout << numerator<<" / " << denominator << endl;
     }
};

int main() {
    Fraction f1(5, 6);
    Fraction f2(13, 76);

    f1.operator+(f2).showAll();
    f1.operator-(f2).showAll();
    f1.operator*(f2).showAll();
    f1.operator/(f2).showAll();
 }