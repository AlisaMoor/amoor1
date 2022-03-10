#include <iostream>
using namespace std;

void fib(int n) {
	int a = 0, b = 1, c;
	for (int i = 0; i < n; ++i) {
		cout << a << endl;
		c = b;
		b += a;
		a = c;
	}
}

int main() {
	fib(10);
	return 0;
}