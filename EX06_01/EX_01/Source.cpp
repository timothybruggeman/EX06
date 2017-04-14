#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	ofstream iofile("Exercise13_1.txt", ios::app);
	for (int i = 1; i < 100; i++) iofile << rand() % 101 << " ";
	iofile.close();
}