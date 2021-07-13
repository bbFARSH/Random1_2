#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int buffer = 0;
	int a;
	int b;
	int arr[n];
	cout << "Введите минимальное число массива: ";
	cin >> a;
	cout << "Введите максимальное число массива: ";
	cin >> b;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % b + a;
	}
	// Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{

		    if (arr[j] > arr[j + 1])
		    {
			     buffer = arr[j];
			     arr[j] = arr[j + 1];
			     arr[j + 1] = buffer;
		    }
		}

	}
	cout << endl;

}