#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	long double z = 16383.5f;

    srand(time(0));
	
	long double icsayac = 0;
	long double tamsayac = 0;
	

	

	for (int i = 0; i < 10000000; i++)
	{
		long double a = rand() / z;
		long double x = a - 1;

		a = rand() / z;
		long double y = a - 1;

		if ((x * x) + (y * y) <= 1)
		{
			icsayac++;
		}
		tamsayac++;


	}
		

	cout << "pi sayisi=" << 4 * (icsayac / tamsayac) << endl;

	
	

}

