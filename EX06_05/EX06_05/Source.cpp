#include <iostream>

#include "Complex.h"

using namespace std;

void main() {
	double q = 1, w = 2, e = 3, r = 4;
	cout << "Enter the first complex number: ";
	cin >> q >> w;
	cout << "Enter the second complex number: ";
	cin >> e >> r;
	Complex one(q, w);
	Complex two(e, r);
	Complex three;

	three = one + two;
	cout << "(" << one.getA() << " + " << one.getB() << "i) + (" << two.getA() << " + " << two.getB() << "i) = " << three.getA() << " + " << three.getB() << "i" << endl;
	three = one - two;
	cout << "(" << one.getA() << " + " << one.getB() << "i) + (" << two.getA() << " + " << two.getB() << "i) = " << three.getA() << " + " << three.getB() << "i" << endl;
	three = one * two;
	cout << "(" << one.getA() << " + " << one.getB() << "i) + (" << two.getA() << " + " << two.getB() << "i) = " << three.getA() << " + " << three.getB() << "i" << endl;
	three = one / two;
	cout << "(" << one.getA() << " + " << one.getB() << "i) + (" << two.getA() << " + " << two.getB() << "i) = " << three.getA() << " + " << three.getB() << "i" << endl;
	cout << "|" << one.getA() << " + " << one.getB() << "| = " << one.abs(one) << endl;

	int stop;
	cin >> stop;
}