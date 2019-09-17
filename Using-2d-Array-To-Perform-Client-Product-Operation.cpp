#include <iostream>
using namespace std;

void maxrating(int[7][5]);


void averagerating(int arr[7][5]);

bool check(int inp)
{
	if (inp > 0 && inp <= 10)
	{
		return true;
	}
	else if (inp<0||inp>10)
	{
		return false;
	}

}
int main()
{
	int cliepro[7][5];

	for (int x = 0; x < 7; x++)
	{
		cout << "Client number:" << x + 1;
		for (int y = 0; y < 5; y++)
		{
			cout << " :Score for Product number: " << y + 1 << endl;
			int feedback=0;
			cin >> feedback;
			while (check(feedback) != true)
			{
				cout << "Can't Enter this score,enter again:" << endl;
				system("cls");
				cin >> feedback;
			}
			system("cls");
			cliepro[x][y] = feedback;
			
		}
	}
	system("cls");
	cout << "Client's with their product scores are:" << endl;

	system("cls");
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			cout << "Client Number :" << x + 1 << "Score for Product number: " << y + 1 << " SCORE:" << cliepro[x][y] << endl;
		}
		cout << endl;
	}

	averagerating(cliepro);

	maxrating(cliepro);


	system("pause");
}


void averagerating(int arr[7][5]){

	float averagerating[5];
	int pro = 0;

	float aver;
	cout << endl;
	cout << endl;

	for (int g = 0; g < 5; g++)
	{
		aver = 0;
		for (int h = 0; h < 7; h++)
		{
			aver += arr[h][g];
		}
		averagerating[pro] = aver / 7;
		pro++;
	}
	for (int g = 0; g < 5; g++)
	{
		cout << "averagerating Rating for product: " << g + 1 << " is: " << averagerating[g] << endl;
	}
}

void maxrating(int arr[7][5])
{
	int max ;
	int produc=0;

	cout << endl;
	cout << endl;
	for (int x = 0; x < 7; x++)
	{
		max = 0;
		for (int g = 0; g < 5; g++)
		{
			if (arr[x][g] > max)
			{
				max = arr[x][g];
				produc = g+1;
			}
		}
		cout << "Client: " << x + 1 << " Has given max score to Product: " << produc << endl;
	}


}

