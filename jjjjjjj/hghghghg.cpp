#include <iostream>
using namespace std;
int main()
{
	int a,b,k,S=0; setlocale(LC_ALL, "rus");
	cout << "введите границы" << endl;
	cin >> a>> b;
	cout << "введите делитель" << endl;
	cin >> k;
	for (int i = a; i <= b; ++i)
	{
		if (i % k == 0)
		{
			S += i;
		}
	}
	cout << "сумма всех чисел кратных k = " << S << endl;
	return 0;
}