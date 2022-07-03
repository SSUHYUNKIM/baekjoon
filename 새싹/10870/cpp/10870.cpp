#include <iostream>
using namespace std;

int fibo(int input) {
	if (input == 0) {
		return 0;
	}
	else if (input == 1) {
		return 1;
	}
	else {
		return fibo(input - 1) + fibo(input - 2);
	}
}

int main() {
	int input;
	cin >> input;
	cout << fibo(input) << endl;
    return 0;
}