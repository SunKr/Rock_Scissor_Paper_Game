#include <iostream>

using namespace std;

void iStartCount(int star)
{

	for (int i = 0; i < star; i++)
	{
		for (int j = star; i < j; --j)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{

	iStartCount(10);

	
	return 0;
}