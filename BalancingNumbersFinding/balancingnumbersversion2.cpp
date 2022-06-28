#include <iostream>
#include<ctime>

using namespace std;

long long int n;
long long int temp = 0;
long long int ktop = 0;
long long int btop = 0;

int main()
{
	cout << "Balance number bulma programina hos geldiniz." << endl;
	cout << "Kaca kadar arama yapilsin?" << endl;
	cin >> n;
	clock_t start = clock();

	for (int i = 1; i < n + 1; i++)
	{
		temp = i;

		ktop = ktop + i - 1;

		while (ktop > btop)
		{
			btop = btop + (i + 1);
			i = i + 1;
			if (ktop == btop)
			{
				cout << temp << endl;
			}
		}

		btop = 0;
		i = temp;


	}
	double calismaSuresi = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;

	cout << calismaSuresi << endl;

}
