#include <iostream>
#include <complex>

using namespace std;

int product(int a, int b);
complex<double> product(complex<double> a, complex<double> b);

int main()
{
	setlocale(LC_ALL, "Russian");

	int num1, num2;

	cout << "Введите первое целое число: " << endl;
	cin >> num1;
	cout << "Введите второе целое число: " << endl;
	cin >> num2;

	cout << "Произведение целых чисел равно: " << endl;
	cout << product(num1, num2) << endl;

	double real1, imag1, real2, imag2;

	cout << "Введите действительную часть первого комплексного числа: " << endl;
	cin >> real1;
	cout << "Введите мнимую часть первого комплексного числа: " << endl;
	cin >> imag1;

	cout << "Введите действительную часть второго комплексного числа: " << endl;
	cin >> real2;
	cout << "Введите мнимую часть второго комплексного числа: " << endl;
	cin >> imag2;

	complex<double> comp_num1(real1, imag1);
	complex<double> comp_num2(real2, imag2);

	cout << "Произведение комплексных чисел равно: " << endl;
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