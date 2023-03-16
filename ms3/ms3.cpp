#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RUSSIAN");
	int a[100];
	int n;
	
	cout << "Введите количество элементов массива : ";
	cin >> n;
	cout << "Заполните массив" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> a[i];
	}
	int max = -999999;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0 && a[i] > max )
			max = a[i];
		
	}
	if (max=-999999)
	{
		return (0);
	}
	cout << "Наибольший из отрицательных элементов: " << max;

}