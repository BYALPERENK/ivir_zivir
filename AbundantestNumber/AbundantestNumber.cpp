// Pozitif tam bölenlerin toplamının kendisine oranı en büyük olan sayı
#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>

using namespace std;

int main()
{
    vector<long long int> bolenlerVec;
    vector<long long int> bolenlerinSayisiVec;
    long long int son;
    long long int bas_i;
    double oran = 0.0;
    double x;
    long long int sayi=0;

    cout << "Kaca kadar abundantest sayi aransin?" << endl;
    cin >> son;
    for (long long int i = 5; i <= son; i++)
    {
        bas_i = i;
        if (i % 2 == 0)
        {
            bolenlerVec.push_back(2);
            long long int ikisayac = 0;
            while (i % 2 == 0)
            {
                i = i / 2;
                ++ikisayac;
            }
            bolenlerinSayisiVec.push_back(ikisayac);
        }

        for (long long int j = 3; j <= sqrt(i); j = j + 2)
        {
            if (i % j == 0)
            {
                bolenlerVec.push_back(j);
                long long int sayac = 0;
                while (i % j == 0)
                {
                    i = i / j;
                    ++sayac;
                }
                bolenlerinSayisiVec.push_back(sayac);
            }
        }
        if (2 < i)
        {
            bolenlerVec.push_back(i);
            bolenlerinSayisiVec.push_back(1);
        }
        long long int toplamlar = 1;

        for (long long int x = 0; x < bolenlerVec.size(); x++)
        {
            toplamlar = toplamlar * (pow(bolenlerVec[x], bolenlerinSayisiVec[x] + 1) - 1) / (bolenlerVec[x] - 1);
        }

        double x = toplamlar / bas_i;

        if (x>oran)
        {
            oran = x;
            sayi = bas_i;
        }

        bolenlerVec.clear();
        bolenlerinSayisiVec.clear();

        i = bas_i;

    }

    cout << "Oran: " << oran << endl;
    cout << "Sayi: " << sayi;
}

