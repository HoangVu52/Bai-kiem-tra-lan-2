#include<iostream>
#include <algorithm>
using namespace std;
int i, j, n, m;
int a[10005], b[10005];
void sx(int a[], int n)
{
	for (int i = 0; i<n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i]>a[j]) swap(a[i], a[j]);
}
int main()
{
	do
	{
		cout << "nhap so luong phan tu hien tai day 1 la";
		cin >> n;
	} while (n <= 0 || n > 1005);
	cout << "phan tu trong mang 1 la";
	for (i = 0; i < n; i++)
		cin >> a[i];
	do
	{
		cout << "nhap so luong phan tu hien tai day 2 la";
		cin >> m;
	} while (m <= 0 || m> 1005);
	cout << "phan tu trong mang 2 la";
	for (j = 0; j < m; j++)
		cin >> b[j];


	sx(a, n);
	sx(b, m);
	cout << "hoi cua A va B la: " << endl;
	for (i = 0; i<n; ++i)
		if (a[i] != a[i + 1])
		{
			for (j = 0; j<m; ++j)
				if (a[i] == b[j]) break;
			if (j == m) cout << a[i] << "  ";
		}
	for (i = 0; i<m; ++i)
		if (b[i] != b[i + 1]) cout << b[i] << "  ";

	cout << endl;
	cout << "day hieu la";
	int i, j, dem = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			if (a[i] == b[j])
				break;
		if (j >= m)
		{
			cout << a[i] << " ";
			dem++;
		}
	}
	if (dem == 0)
		cout << "\nTat ca phan tu deu giong  ";


	cout << endl;
	cout << "day giao la";
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i] == b[j])
				cout << a[i] << " ";

	system("pause");
	return 0;

}