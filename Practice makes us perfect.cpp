#include <iostream>
using namespace std;

int main()
{
	int t, count = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> t;
		if (t >= 10)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
