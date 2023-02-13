#include <iostream>
#include <complex>

using namespace std;

int product(int a, int b);
complex<double> product(complex<double> a, complex<double> b);

int main()
{
	setlocale(LC_ALL, "Russian");

	int num1, num2;

	cout << "������� ������ ����� �����: " << endl;
	cin >> num1;
	cout << "������� ������ ����� �����: " << endl;
	cin >> num2;

	cout << "������������ ����� ����� �����: " << endl;
	cout << product(num1, num2) << endl;

	double real1, imag1, real2, imag2;

	cout << "������� �������������� ����� ������� ������������ �����: " << endl;
	cin >> real1;
	cout << "������� ������ ����� ������� ������������ �����: " << endl;
	cin >> imag1;

	cout << "������� �������������� ����� ������� ������������ �����: " << endl;
	cin >> real2;
	cout << "������� ������ ����� ������� ������������ �����: " << endl;
	cin >> imag2;

	complex<double> comp_num1(real1, imag1);
	complex<double> comp_num2(real2, imag2);

	cout << "������������ ����������� ����� �����: " << endl;
	cout << real(product(comp_num1, comp_num2)) << " + " << imag(product(comp_num1, comp_num2)) << "i";
}

int product(int a, int b)
{
	return a * b;
}
complex<double> product(complex<double> a, complex<double> b)
{
	return a * b;
}