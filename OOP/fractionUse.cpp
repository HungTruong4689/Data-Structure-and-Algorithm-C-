#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
    Fraction f1(10,5);
    Fraction f2(15,4);

    Fraction const f3;
    cout<<f3.getNumerator()<<" "<<f3.getDenominator();

    f3.setNumerator(10);
	return 0;
}
