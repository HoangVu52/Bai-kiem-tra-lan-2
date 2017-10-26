#include <iostream>
using namespace std;
int USCLN(int, int);

int main()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout <<"USCLN = " <<  USCLN(m, n) << endl;
	system("pause");
	return 0;
}
int USCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
