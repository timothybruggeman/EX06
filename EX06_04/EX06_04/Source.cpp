#include <iostream>
#include <vector>
#include <ctime>

#include "CircleWithConstantMemberFunctions.h"

using namespace std;

void main() {
	Circle one(1);
	Circle two(2);
	Circle three(3);

	cout << boolalpha;
	cout << (one < two) << endl;
	cout << (one <= two) << endl;
	cout << (one == two) << endl;
	cout << (one != two) << endl;
	cout << (one > two) << endl;
	cout << (one >= two) << endl;

	int stop; cin >> stop;
}