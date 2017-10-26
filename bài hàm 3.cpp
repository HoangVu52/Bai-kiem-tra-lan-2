#include <iostream>
using namespace std;
int giaithua(int);

int main()
{
	int n;
	cin >> n;
	cout << "tổng= " << giaithua(n) << endl;
	system("pause");
	return 0;

}
int giaithua(int n)
{
	int t = 1, s=0;
	for (int i = 1; i <= n; i++)
	{
		t = t*i;
		s = s + t;
	}
	return s;
}
