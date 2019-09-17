#include <iostream>
using namespace std;

class safearray
{
private:
	int size;
	int data;
	int *arra;
	int currentindex = 0;

public:
	safearray()//default constructor
	{
		size = 10;
		arra=new int[size];

		for (int i = 0; i < size; i++)
		{
			arra[i] = NULL;
		}

	}
	safearray(int s)//parametric constructor
	{
		size = s;
		arra=new int[size];
		
		for (int i = 0; i < size; i++)
		{
			arra[i] = NULL;
		}

	}
	safearray(const safearray &carra)//copy constructor
	{
		size = carra.size;
		currentindex = carra.currentindex;
		arra=new int[size];
		for (int start = 0; start < size; start++)
		{
			arra[start] = carra.arra[start];
		}

	}
	void insert(int d)//function for inserting,append
	{
		if (currentindex < size)
		{
			arra[currentindex] = d;
			currentindex++;
		}
		else if (currentindex == size)
		{
			cout << "Array is full" << endl;
		}
		else if (currentindex >= size)
		{
			cout << "Array index out of bounds!" << endl;
		}

	}
	void insertatspecifiedindex(int i, int d)//inserting at specified index
	{
		if (i < size)
		{
			arra[i] = d;

		}
		else if (i > size || i < 0)
		{
			cout << "Array index out of bounds cannot add" << endl;
		}
	}

	int retrieve(int i)//retrieval from sepcified index
	{
		if (i < size)
		{
			if (arra[i] == NULL)
			{
				cout << "The entered index is empty right now" << endl;
			}
			else if (arra[i] != NULL)
			{
				cout << arra[i] << endl;
				return arra[i];
			}
		}
		else if (i > size || i < 0)
		{
			cout << "Array index out of bounds" << endl;
		}
	}
	friend ostream &operator<<(ostream &out, safearray &outarray)//for printing
	{
		cout << "ALL ENTERED ELEMENTS IN THE SAFEARRAY ARE" << endl;
		for (int print = 0; print < outarray.size; print++)
		{
			if (outarray.arra[print] != NULL)
			{
				out << outarray.arra[print] << endl;
			}
		}
		return out;
	}
	void print()
	{
		cout << "ALL ENTERED ELEMENTS IN THE SAFEARRAY ARE" << endl;
		for (int print = 0; print < size; print++)
		{
			if (arra[print] != NULL)
			{
				cout << arra[print] << endl;
			}
		}
	}

	void operator=(safearray &carra)//for assigning
	{
		size = carra.size;
		currentindex = carra.currentindex;
		arra=new int[size];
		for (int start = 0; start < size; start++)
		{
			arra[start] = carra.arra[start];
		}

	}
	int length()//gives current occupied indexes
	{
		return currentindex;	
	}
	int sizeoff()//gives total size of the array
	{
		return size;
	}

};


int main()//driver main for checking functionality of our class
{
	safearray a;
safearray c(22);

a.insert(56);
a.insert(22);
a.insert(56);

cout<<"Retrieving x(0),x(1),x(2),x(12):"<<endl;
a.retrieve(0);
a.retrieve(1);
a.retrieve(2);
a.retrieve(12);
cout<<"Array a is:"<<endl;
cout<<a;

cout<<"Array b After copying:"<<endl;
safearray b(22);
b=a;

cout<<b;


c.insert(58);
c.insert(21);
c.insert(51);
c.insertatspecifiedindex(1,69);
c.insertatspecifiedindex(2,79);

int siz=c.sizeoff();
int asiz=a.sizeoff();
int bsiz=b.sizeoff();

cout<<"Array c"<<endl;
cout<<c;
cout<<endl;


cout<<"Size of array c:"<<siz<<endl;
cout<<"Size of array a:"<<asiz<<endl;
cout<<"Size of array b:"<<bsiz<<endl;

int x=a.retrieve(1);
cout<<"Retrieval"<<endl;
cout<<"From array a:x(1):"<<x<<endl;

	system("pause");
}
