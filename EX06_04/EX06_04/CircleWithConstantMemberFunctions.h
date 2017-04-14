#ifndef CIRCLE_H
#define CIRCLE_H

/*bool operator<(const Circle &c1, const Circle &c2);
bool operator<=(const Circle &c1, const Circle &c2);
bool operator==(const Circle &c1, const Circle &c2);
bool operator!=(const Circle &c1, const Circle &c2);
bool operator>(const Circle &c1, const Circle &c2);
bool operator>=(const Circle &c1, const Circle &c2);*/

class Circle
{
public:
	Circle();
	Circle(double r) {
		radius = r;
	}
	double getArea() const {
		return 3.14 * radius * radius;
	}
	double getRadius() const {
		return radius;
	}
	void setRadius(double r) {
		radius = r;
	}
	static int getNumberOfObjects;

private:
	double radius;
	static int numberOfObjects;
};

bool operator<(const Circle &c1, const Circle &c2) {
	if (c1.getRadius() < c2.getRadius()) return true;
	else return false;
}
bool operator<=(const Circle &c1, const Circle &c2) {
	if (c1.getRadius() <= c2.getRadius()) return true;
	else return false;
}
bool operator==(const Circle &c1, const Circle &c2) {
	if (c1.getRadius() == c2.getRadius()) return true;
	else return false;
}
bool operator!=(const Circle &c1, const Circle &c2) {
	if (c1.getRadius() != c2.getRadius()) return true;
	else return false;
}
bool operator>(const Circle &c1, const Circle &c2) {
	if (c1.getRadius() > c2.getRadius()) return true;
	else return false;
}
bool operator>=(const Circle &c1, const Circle &c2) {
	if (c1.getRadius() >= c2.getRadius()) return true;
	else return false;
}

#endif
