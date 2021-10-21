//Напишите рекурсивную функцию, которая раскладывает число на простые сомножители.
#include <iostream>
using namespace std;
void QW(int a, int b = 2) {
	while (a % b == 0) {
		cout << b << " ";
		a = a / b;
	}
	if (a != 1) {
		QW(a, b + 1);
	}
}
	void main() {
		int x;
		cin >> x;
		QW(x);1

	}