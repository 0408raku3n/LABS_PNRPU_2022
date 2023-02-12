#include <iostream>

using namespace std;

void sum_matrix(int m, int mat[10][10]);

int main()
{
	int n;
	int matrix[10][10];
	int k;

	setlocale(LC_ALL, "Russian");

	cout << "¬ведите количество строк и столбцов (не более 10): " << endl;
	cin >> n;
	cout << "¬ведите построчно элементы матрицы: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> k;
			matrix[i][j] = k;
		}
		cout << endl;
	}

	cout << "—умма матрицы и ее транспонированной версии равна: " << endl;
	sum_matrix(n, matrix);
}

void sum_matrix(int m, int mat[10][10])
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s = mat[i][j] + mat[j][i];
			cout << s << " ";
		}
		cout << endl;
	}
}