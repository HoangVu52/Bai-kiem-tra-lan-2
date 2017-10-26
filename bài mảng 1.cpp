#include <iostream>
#include <cstdlib>
using namespace std;
int random(int a, int b)
{

	return rand() % (-100 + (200));
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i<n; i++)
		cout << a[i] << "  " << endl;
}
int  xoa(int a[], int &n, int vt)
{
	if (vt >= 0 && vt<n)
	{
		for (int i = vt; i< n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		n--;
	}
}
int main()
{
	int i, n, s = 0;
	int a[200];
	cin >> n;
	for (int i = 0; i<n; i++)
		a[i] = random(-100, 100);
	cout << " mang da nhap la: ";
	xuatmang(a, n);
	for (int i = 0; i<n; i++)
	{
		if (a[i] >= 0)
			s = s + a[i];
	}
	cout << "tong la: " << s << endl;
	cout << " mang sau khi xoa phan tu: ";
	xuatmang(a, n);
	return 0;
}