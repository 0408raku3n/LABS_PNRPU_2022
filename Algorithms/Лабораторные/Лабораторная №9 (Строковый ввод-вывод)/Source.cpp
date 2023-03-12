#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char str[1000];
	int k = 0;

	ifstream F1;
	ofstream F2;

	F1.open("F1.txt");
	F2.open("F2.txt");

	while (!F1.eof())
	{
		F1.getline(str, 1000);
		
		int i = 1;

		while (str[i] != '.')
		{
			i++;
		}

		if (str[0] == str[i - 1])
		{
			F2 << str << endl;
			k += i + 1;
		}

	}

	F1.close();
	F2.close();

	cout << "Строки успешно скопированы!\n" << "Количество символов в файле F2 равно: " << k;
}