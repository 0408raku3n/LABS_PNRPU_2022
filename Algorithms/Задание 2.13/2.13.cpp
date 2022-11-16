#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, b, c; int D;
	
	cout << "Введите коэффициенты a, b, c" << endl;
	cin >> a >> b >> c;

	D = sqrt(b * b - 4 * a * c);

	cout << "Первый корень равен:" << ((b * (-1) + D) / (2 * a)) << endl;
	cout << "Второй корень равен:" << ((b * (-1) - D) / (2 * a)) << endl;
}
