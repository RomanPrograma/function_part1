#include <iostream>
#include<cstdlib>
using namespace std;

bool TrueOrFalse(int num) {
	if (num > 0)
		return true;
	else
		return false;

}

int main() {
	int num;
	cout << "Enter num: ";
	cin >> num;
	if (TrueOrFalse(num)) {
		cout << "True!";
	}
	else {
		cout << "False!";
	}
	system("pause>nul");
	return 0;
}