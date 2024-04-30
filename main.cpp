#include <iostream>
using namespace std;

/* Массив с циклом */

int main()
{
	setlocale(LC_ALL, "rus");

	const int size = 5;

	int arr[size] = {1,2,3,4,5};
	//               0 1 2 3 4
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}