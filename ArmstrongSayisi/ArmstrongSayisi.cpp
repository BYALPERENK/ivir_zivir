#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int son;
	cout << "Kaca kadar Arstrong aransin?" << endl;
	cin >> son;

	for (int i = 0; i < son; i++)
	{
		int temp = i;
		int kacbasamak = 0;
		while (i!=0)
		{
			i=i / 10;
			++kacbasamak;
		}
		i = temp;
		int top = 0;
		while (i!=0)
		{
			top=top+pow((i % 10), kacbasamak);
			i = i / 10;
		}
		if (top==temp)
		{
			cout << temp << endl;
		}
		i = temp;
	}
}
