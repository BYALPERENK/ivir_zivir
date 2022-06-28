#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<int> bolenlerVec;
    vector<int> bolenlerinSayisiVec;
    int i;

    cout << "Hangi sayi asal carpanlarina ayirilsin?" << endl;
    cin >> i;

    if (i % 2 == 0)
    {
        bolenlerVec.push_back(2);
        int ikisayac = 0;
        while (i % 2 == 0)
        {
            i = i / 2;
            ++ikisayac;
        }
        bolenlerinSayisiVec.push_back(ikisayac);
    }

    for (int j = 3; j <= sqrt(i); j = j + 2)
    {
        if (i % j == 0)
        {
            bolenlerVec.push_back(j);
            int sayac = 0;
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

    for (int i = 0; i < bolenlerVec.size(); i++)
    {
        cout << bolenlerVec[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < bolenlerinSayisiVec.size(); i++)
    {
        cout << bolenlerinSayisiVec[i] << " ";
    }
}