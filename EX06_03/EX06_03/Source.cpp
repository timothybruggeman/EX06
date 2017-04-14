#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int findName(string year, string name, char gender);

int main() {
	string year;
	char gender;
	string name;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the gender: ";
	cin >> gender;
	if (gender == 'M') gender = 'm';
	else if (gender == 'F') gender = 'f';
	while ((gender != 'm') && (gender != 'f')) {
		cout << "That is not an acceptable gender. Enter the gender: ";
		cin >> gender;
	}
	cout << "Enter the name: ";
	cin >> name;
	
	int result = findName(year, name, gender);
	if (result == 0)
		cout << endl << "That name is not found.";
	else
		cout <<  endl << name << " is the #" << result << " most popular name in " << year << "." << endl;
}

int findName(string year, string name, char gender) {
	fstream iofile("yob" + year + ".txt", ios::in);
	int numberOfNamesSkipped = 0;
	string Name;
	string Gender;
	string NumbaOfDemBabies;
	if (gender == 'm') {
		for (int i = 1; !iofile.fail(); i++) {
			iofile >> Name >> Gender >> NumbaOfDemBabies;
			if (Gender == "m") {
				if (Name == name) {
					iofile.close();
					return i - numberOfNamesSkipped;
				}
			}
			else numberOfNamesSkipped++;
		}
	}
	else {
		for (int i = 1; !iofile.fail(); i++) {
			iofile >> Name >> Gender >> NumbaOfDemBabies;
			if (Name == name) {
				iofile.close();
				return i;
			}
		}
	}
	iofile.close();
	return 0;
}