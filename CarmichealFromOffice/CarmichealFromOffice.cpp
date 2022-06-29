#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long int altson;
	long long int ustson;
	cout << "Kac altsona kadar micheal sayi aransin?"<<endl;
	cin >> altson;
	cout << "Kac ustsona kadar micheal sayi aransin?" << endl;
	cin >> ustson;

	for (long long int i = 2; i < altson; i++)
	{
		for (long long j = i; j < ustson; j++)
		{
			unsigned long long int a = (pow(i, (j - 1)) - 1);
			if ( a % j == 0)
			{
				cout << i<<"^"<<j<< "= " << a << endl;
			}
		}
	}
}