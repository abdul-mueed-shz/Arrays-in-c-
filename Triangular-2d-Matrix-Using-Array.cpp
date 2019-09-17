#include <iostream>
using namespace std;


int main()
{

	const int size = 11;
	int size2 = 11;

	int arr[size][size];

	for (int f = 0; f < size; f++)
	{
		for (int d = 0; d < size; d++)
		{
			arr[f][d] = 0;
		}
	}

	
	for (int g = 0; g < size; g++)
	{
		for (int k = 0; k < size2; k++)
		{

			arr[g][k] = 1;
		}
		size2--;
	}


	for (int l = 0; l < size; l++)
	{
		for (int m = 0; m < size; m++)
		{
			cout << arr[l][m];
		}
		cout << endl;
	}



	system("pause");
}