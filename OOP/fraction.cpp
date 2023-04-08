#include<iostream>
using namespace std;
class Fraction {
	private :

		int numerator;
		int denominator;
    public :
        Fraction() {

		}
        Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}
        int getNumerator() const {
			return numerator;
		}

		int getDenominator() const {
			return denominator;
		}
		void setNumerator(int n) {
			numerator = n;
		}

		void setDenominator(int d) {
			denominator = d;
		}
		void print() const {
			cout << this -> numerator << " / " << denominator << endl;
		}
		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}
};
