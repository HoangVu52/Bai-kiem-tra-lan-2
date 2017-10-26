#include <iostream>
using namespace std;
int KTNT(int);

int main()
{
	for (int j = 100; j <= 1000; j++)
		if (KTNT(j) == 1)
			cout << j << " ";
	system("pause");
	return 0;
}
int KTNT(int a)
{
	if (a < 2)
		return 0;
	for (int i = 2; i < a; i++)
	{
		if (a%i == 0)
			return 0;
	}
	return 1;
}
