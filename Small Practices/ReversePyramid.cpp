#include <iostream>
using namespace std;
int main()
{
	int N, i = 1;
	cout << "Enter number of rows: ";
	cin >> N;
	while (i <= N)
	{
		int j = 0;
		while ((i + j) < N)
		{

			cout << " ";
			j++;
		}
		int k = 1;
		while (k <= (2 * i - 1))
		{
			
				cout << "*";
			
			k++;
		}
		i++;
		cout << endl;
	}
	i-=2;
	while (i > 0)
	{
		int j = 0;
		while ((i + j) < N)
		{
			cout << " ";
			j++;
		}
		int k = 1;
		while (k <= (2 * i - 1))
		{
				cout << "*";
			k++;
		}
		i--;
		cout << endl;
	}
	return 0;
}