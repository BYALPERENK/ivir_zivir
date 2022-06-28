#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
using namespace std;

int main()
{
    long long a;
    long double topuzunluk = 0;
    srand(time(0));
    cout << "Kac sayi alinsin"<<endl;
    cin >> a;
    float x1;
    float y1;
    float x2;
    float y2;
    float uzaklik;


    for (int i = 1; i <= a; i++)
    {
        x1 = rand() / 32767.0;
        y1 = rand() / 32767.0;
        x2 = rand() / 32767.0;
        y2 = rand() / 32767.0;

        uzaklik = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

        topuzunluk = topuzunluk + uzaklik;

    }

    cout << "Ortalama: " << topuzunluk / a;

}

