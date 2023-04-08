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
};
