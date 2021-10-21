//Дано натуральное число N. Выведите все его цифры по одной, в обычном порядке, разделяя их пробелами или новыми строками. (рекурсия!)
#include <iostream>
using namespace std;
void X(int n) {
	if (n < 10) {
		cout << n;
		return;
	}
	X(n / 10);
	cout << " " << n % 10;
}
int main() {
	X(987654321);
	cout << endl;
}
	


	