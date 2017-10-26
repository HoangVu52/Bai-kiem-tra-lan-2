#include <iostream>

using namespace std;
bool timkiem(int a[], int n, int x)
{
	for (int i = 0; i<n; i++)
	{
		if (a[i] == x)
			return true;
	}
	return false;
}
void nhapmang(int a[], int &n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "nhap vao a[" << i << "] la ";
		cin >> a[i];
	}
}
void hoanvi(int &x, int &y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i<n; i++)
		cout << a[i] << "  " << endl;
}
int sapxeptang(int a[], int n)
{
	int i, j;
	for (i = 0; i<n - 1; i++)
	{
		for (j = i + 1; j<n; j++)
			if (a[i]>a[j])
				hoanvi(a[i], a[j]);
	}
}
void them(int a[], int n, int vt, int x)
{
	if (vt >= 0 && vt <= n)
	{
		for (int i = n; i >= vt + 1; i--)
		{
			a[i] = a[i - 1];
		}
		a[vt] = x;
		n++;
	}
}

int main()
{
	int n, i, x;
	int a[200];
	cin >> n;
	nhapmang(a, n);
	for (int i = n; i >= 0; i--)
		cout << a[i] << "  ";
	cin >> x;
	{if (timkiem(a, n, x))
		cout << " tim thay x trong mang";
	else
		cout << " khong tim thay x trong mang" << endl; }
	cout << " sap xep tang dan: " << "  ";
	sapxeptang(a, n);
	xuatmang(a, n);
	int vt, t;
	do
	{
		cout << "nhap vi tri them: ";
		cin >> vt;
		if (vt<0 || vt>n)
			cout << " vi tri them khong hop le" << endl;
	} while (vt < 0 || vt > n);
	cout << " nhap x: ";
	cin >> t;
	them(a, n, vt, t);
	cout << " mang sau khi them: ";
	xuatmang(a, n + 1);

	return 0;
}