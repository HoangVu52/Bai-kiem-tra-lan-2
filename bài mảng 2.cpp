#include <iostream>

using namespace std;
void nhapmang(int a[], int &n)
{
	for (int i = 0; i<n; i++)
	{
		cout << " nhap vao a[" << i << "] la ";
		cin >> a[i];
	}
}
int Timmax(int a[], int n)
{
	int lonnhat = a[0];
	for (int i = 1; i<n; i++)
	{
		if (a[i]>lonnhat)
			lonnhat = a[i];
	}
	return lonnhat;
}
int Timmin(int a[], int n)
{
	int nhonhat = a[0];
	for (int i = 1; i<n; i++)
		if (a[i]<nhonhat)
			nhonhat = a[i];
	return nhonhat;
}
int main()
{
	int a[200];
	int n;
	cin >> n;
	nhapmang(a, n);
	cout << "max la: " << Timmax(a, n) << endl;
	cout << "min la: " << Timmin(a, n);
	return 0;
}