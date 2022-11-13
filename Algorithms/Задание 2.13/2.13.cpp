#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, b, c; int D;
	
	cin >> a >> b >> c;

	D = sqrt(b * b - 4 * a * c);

	cout << ((b * (-1) + D) / (2 * a)) << endl;
	cout << ((b * (-1) - D) / (2 * a)) << endl;
}