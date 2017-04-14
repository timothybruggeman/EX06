#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
	fstream iofile("Exercise13_3.txt", ios::in);
	int score;
	int count = 0, sum = 0;
	while (!iofile.fail()) {
		iofile >> score;
		count++;
		sum += score;
	}
	cout << "Count: " << count << endl << "Average: " << sum / count;
	iofile.close();
	return 0;
}