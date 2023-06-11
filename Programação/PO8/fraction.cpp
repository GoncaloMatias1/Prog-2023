#include <iostream>
#include <cmath>
using namespace std;

class Fraction{
    public:
        Fraction();
        Fraction(int numerator, int denominator);
        int denominator() const;
        int numerator() const;
        Fraction sum(const Fraction& right);
        Fraction sub(const Fraction& right);
        Fraction mul(const Fraction& right);
        Fraction div(const Fraction& right);
        void normalise();
        void write() const;
    private:
        static int gcd(int a, int b);
        int denominator_, numerator_;
};

//! Compute the gcd of two numbers.
int Fraction::gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

//! Normalize a fraction.
void Fraction::normalise() {
  int g = gcd(numerator_, denominator_);
  numerator_ /= g;
  denominator_ /= g;
  if (denominator_ < 0) {
    numerator_ = - numerator_;
    denominator_ = - denominator_;
  }
}

// shows fraction on the screen
void Fraction::write() const {
  cout << numerator_ << '/' << denominator_;
}

Fraction::Fraction(){
    numerator_ = 0;
    denominator_ = 1;
}

Fraction::Fraction(int numerator, int denominator){
    denominator_ = denominator;
    numerator_ = numerator;
    normalise();
}

int Fraction::denominator() const{
    return denominator_;
}

int Fraction::numerator() const{
    return numerator_;
}

Fraction Fraction::sum(const Fraction& right){
    return Fraction(numerator_ * right.denominator_ + right.numerator_ * denominator_, denominator_ * right.denominator_);
}

Fraction Fraction::sub(const Fraction& right){
    return Fraction(numerator_ * right.denominator_ - right.numerator_ * denominator_, denominator_ * right.denominator_);
}

Fraction Fraction::mul(const Fraction& right){
    return Fraction(numerator_ * right.numerator_, denominator_ * right.denominator_);
}

Fraction Fraction::div(const Fraction& right){
    return Fraction(numerator_ * right.denominator_, denominator_ * right.numerator_);
}
