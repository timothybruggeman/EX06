#ifndef COMPLEX_H
#define COMPLEX_H

#include <cmath>
#include <cstring>

/*Complex operator+(Complex &one, Complex &two);
Complex operator-(Complex &one, Complex &two);
Complex operator*(Complex &one, Complex &two);
Complex operator/(Complex &one, Complex &two);
Complex operator+=(Complex &one, Complex &two);
Complex operator-=(Complex &one, Complex &two);
Complex operator*=(Complex &one, Complex &two);
Complex operator/=(Complex &one, Complex &two);*/

class Complex {
private:
	double a, b;
public:
	void add(Complex one, Complex two, Complex &three){
		three.setA(one.getA() + two.getA());
		three.setB(one.getB() + two.getB());
}
	void subtract(Complex one, Complex two, Complex &three) {
		three.setA(one.getA() - two.getA());
		three.setB(one.getB() - two.getB());
	}
	void multiply(Complex one, Complex two, Complex &three) {
		three.setA((one.getA() * two.getA()) - (one.getB() * two.getB()));
		three.setB((one.getB() * two.getA()) + (one.getA() * two.getB()));
	}
	void divide(Complex one, Complex two, Complex &three) {
		three.setA(((one.getA() * two.getA()) + (one.getB() * two.getB())) / (pow(two.getA(), 2) + pow(two.getB(), 2)));
		three.setB(((one.getB() * two.getA()) - (one.getA() * two.getB())) / (pow(two.getA(), 2) + pow(two.getB(), 2)));
	}
	double abs(Complex &one) {
		return sqrt(pow(one.getA(),2) + pow(one.getB(), 2));
	}
	void toString() {
		;
	}
	Complex(double &A, double &B) {
		a = A;
		b = B;
	}
	Complex(double &A) {
		a = A;
		b = 0;
	}
	Complex() {
		a = 0;
		b = 0;
	}
	const double getA() {
		return a;
	}
	void setA(double a1) {
		a = a1;
	}
	const double getB() {
		return b;
	}
	void setB(double b1) {
		b = b1;
	}
};

Complex operator+(Complex &one, Complex &two) {
	Complex three;
	three.setA(one.getA() + two.getA());
	three.setB(one.getB() + two.getB());
	return three;
}
Complex operator-(Complex &one, Complex &two) {
	Complex three;
	three.setA(one.getA() - two.getA());
	three.setB(one.getB() - two.getB());
	return three;
}
Complex operator*(Complex &one, Complex &two) {
	Complex three;
	three.setA((one.getA() * two.getA()) - (one.getB() * two.getB()));
	three.setB((one.getB() * two.getA()) + (one.getA() * two.getB()));
	return three;
}
Complex operator/(Complex &one, Complex &two) {
	Complex three;
	three.setA(((one.getA() * two.getA()) + (one.getB() * two.getB()))/(pow( two.getA(), 2) + pow( two.getB(), 2)));
	three.setB(((one.getB() * two.getA()) - (one.getA() * two.getB())) / (pow(two.getA(), 2) + pow(two.getB(), 2)));
	return three;
}
Complex operator+=(Complex &one, Complex &two) {
	Complex three;
	three.setA(one.getA() + two.getA());
	three.setB(one.getB() + two.getB());
	return three;
}
Complex operator-=(Complex &one, Complex &two) {
	Complex three;
	three.setA(one.getA() - two.getA());
	three.setB(one.getB() - two.getB());
	return three;
}
Complex operator*=(Complex &one, Complex &two) {
	Complex three;
	three.setA(((one.getA() * two.getA()) + (one.getB() * two.getB())) / (pow(two.getA(), 2) + pow(two.getB(), 2)));
	three.setB(((one.getB() * two.getA()) - (one.getA() * two.getB())) / (pow(two.getA(), 2) + pow(two.getB(), 2)));
	return three;
}
Complex operator/=(Complex &one, Complex &two) {
	Complex three;
	three.setA(((one.getA() * two.getA()) + (one.getB() * two.getB())) / (pow(two.getA(), 2) + pow(two.getB(), 2)));
	three.setB(((one.getB() * two.getA()) - (one.getA() * two.getB())) / (pow(two.getA(), 2) + pow(two.getB(), 2)));
	return three;
}
/*Complex operator[](bool selector) {
	if (selector == 0)
		return getA();
	else return getB();
}*/

#endif