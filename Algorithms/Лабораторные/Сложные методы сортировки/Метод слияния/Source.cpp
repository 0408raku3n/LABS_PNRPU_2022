#include <iostream>

using namespace std;

int main()
{
	int N, l, r, mid;
	int numbers[100] = {};
	cout << "¬ведите количество случайных чисел: \n";
	cin >> N;

	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		numbers[i] = rand();
		cout << numbers[i] << " ";
	}
	cout << endl;

	l = 0;
	r = N - 1;
	mid = (l + r) / 2;

	mergeSort(numbers, l, mid);
	mergeSort(numbers, mid + 1, r);
	merge(numbers, l, mid, r);

	for (int i = 0; i < N; i++)
	{
		cout << numbers[i];
	}
}

void mergeSort(int arr[], int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int mid = start + (end - start) / 2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);
	merge(arr, start, mid, end);
}

void merge(int arr[], int left, int mid, int right)
{
	int leftRange = mid - left + 1;
	int rightRange = right - mid;

	int *leftArr = new int[leftRange];
	int *rightArr = new int[rightRange];

	for (int i = 0; i < leftRange; i++)
	{
		leftArr[i] = arr[left + i];
	}
	for (int i = 0; i < leftRange; i++)
	{
		rightArr[i] = arr[mid + 1 + i];
	}

	int leftIndex = 0;
	int rightIndex = 0;
	int mergeIndex = 0;

	while (leftIndex < leftRange && rightIndex < rightRange)
	{
		if (leftArr[leftIndex] <= rightArr[rightIndex])
		{
			arr[mergeIndex] = leftArr[leftIndex];
			leftIndex++;
		}
		else
		{
			arr[mergeIndex] = rightArr[rightIndex];
			rightIndex++;
		}
		mergeIndex++;
	}

	while (leftIndex < leftRange)
	{
		arr[mergeIndex] = leftArr[leftIndex];
		leftIndex++;
		mergeIndex++;
	}
	while (rightIndex < rightRange)
	{
		arr[mergeIndex] = rightArr[rightIndex];
		rightIndex++;
		mergeIndex++;
	}

	delete[] leftArr;
	delete[] rightArr;
}