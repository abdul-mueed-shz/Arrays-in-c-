#include <iostream>
using namespace std;
#include <time.h> 

int main()
{
	srand(time(NULL));

	int arr[4][5][6][7];

	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			for (int z = 0; z < 6; z++)
			{
				for (int k = 0; k < 7; k++)
				{
					arr[x][y][z][k] =rand()%7+1 ;
				}
			}
		}
	}



	int (*parr)[4][5][6][7] = &arr;

	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			for (int z = 0; z < 6; z++)
			{
				for (int k = 0; k < 7; k++)
				{
					cout << (*parr)[x][y][z][k];
				}
				cout << endl;
			}
			cout << endl;
		}
		cout << endl;
	}

	




	system("pause");
}