#include <iostream>
//#include <cmath>
using namespace std;
int main()
{
	for (int i = 1; i <= 1000; ++i)
	{
		int sum = 0;
		for (int j = 1; j <= (i/2); ++j)
		{
			if (i % j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum == i)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}