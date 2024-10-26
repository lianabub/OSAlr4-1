#include <iostream>
using namespace std;
int main()
{

	setlocale(LC_ALL, "ru");
	int n, k;
	cout << "Введите начальное число: ";
	cin >> n;
	cout << "Введите конечное число";
	cin >> k;
	for (n; n > 0 && n < k && k < 1000; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			cout << n << endl;
		}
	}
	return 0;
}
