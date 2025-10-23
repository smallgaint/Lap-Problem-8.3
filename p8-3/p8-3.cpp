#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char c);
int convertRomanToInt(string s);


int main() {
	string nums;

	while (true) {
		cout << "Enter a Roman number or Q to quit: ";
		cin >> nums;
		if (nums == "Q") break;

		cout << nums << " = " << convertRomanToInt(nums) << endl;
	}
	return 0;
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

int convertRomanToInt(string s) {
	int total = 0;
	while (s.length() > 0) {
		if (s.length() == 1 || romanCharValue(s[0]) >= romanCharValue(s[1])) {
			total += romanCharValue(s[0]);
			s = s.substr(1);
		}
		else {
			total += romanCharValue(s[1]) - romanCharValue(s[0]);
			s = s.substr(2);
		}
	}
	return total;
}