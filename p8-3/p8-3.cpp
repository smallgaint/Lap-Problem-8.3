#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char c);

int main() {
	string nums = "IVXLCDM";
	int value = 0;
	for (char c : nums) {
		value += romanCharValue(c);
	}
	cout << value << endl;
}

int romanCharValue(char c) {
	if (c == 'I') return 1;
	else if (c == 'V') return 5;
	else if (c == 'X') return 10;
	else if (c == 'L') return 50;
	else if (c == 'C') return 100;
	else if (c == 'D') return 500;
	else if (c == 'M') return 1000;
	else return 0; // Invalid character

}