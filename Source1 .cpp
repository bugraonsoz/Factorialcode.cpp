#include <iostream>
using namespace std;

void factorial(int num) {
	if (num < 0) {
		cout << "Invalid value! Number can never be negative.\nPlease enter a natural number." << endl;
		return;
	}

	int faktoriyel = 1;
	for (int i = 2; i <= num; i++) {
		faktoriyel *= i;
	}
	cout << num << "!:" << faktoriyel << endl;
}

int main() {
	int num;
	cout << "Please enter the number." << endl;
	cin >> num;

	factorial(num);
}