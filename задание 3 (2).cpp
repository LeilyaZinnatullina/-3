//�������� ����������� ��������� ��� �������� ����� �� �������� ������� ��������� � ����������.
#include <iostream>
using namespace std;

int Q(int n, int s = 1) {
    if (n % 10 != 1 && n % 10 != 0) {
        return -1;
    }
    if (n > 0) {
        return Q(n / 10, s * 2) + (n % 10) * s;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    int A;
    cout << "������� �������� �����" << endl;
    cin >> A;
    cout << Q(A);
    return 0;
}
