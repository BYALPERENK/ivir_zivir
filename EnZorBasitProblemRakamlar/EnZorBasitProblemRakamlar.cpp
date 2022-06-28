#include <iostream>
#include<ctime>

using namespace std;

int main()
{
    long long int a = 0;
    long long int enson = 0;
    long long int b = 0;
    long long int c = 0;

    long long int birlersayisi = 0;
    long long int ikilersyisi = 0;
    long long int üclersayisi = 0;
    long long int dörtlersayisi = 0;
    long long int beslersayisi = 0;
    long long int altilarsayisi = 0;
    long long int yedilersayisi = 0;
    long long int sekizlersayisi = 0;
    long long int dokuzlarsayisi = 0;
    long long int sifirlarsayisi = 0;


    cout << "Kaca kadar hesaplama yapilacagini seciniz" << endl;
    cin >> enson;
    cout << endl;
    clock_t start = clock();
    for (a = 2; a <= enson; a++)
    {
        b = a;

        while (a > 1)
        {
            long long int d = a;
            while (a > 0)
            {
                c = a % 10;
                if (c == 0) { sifirlarsayisi++; }
                else if (c == 1) { birlersayisi++; }
                else if (c == 2) { ikilersyisi++; }
                else if (c == 3) { üclersayisi++; }
                else if (c == 4) { dörtlersayisi++; }
                else if (c == 5) { beslersayisi++; }
                else if (c == 6) { altilarsayisi++; }
                else if (c == 7) { yedilersayisi++; }
                else if (c == 8) { sekizlersayisi++; }
                else if (c == 9) { dokuzlarsayisi++; }

                a = a / 10;
            }
            a = d;
            if (a % 2 == 0)
            {
                a = a / 2;
            }
            else
            {
                a = a * 3 + 1;
            }
        }

        a = b;
    };

    cout << sifirlarsayisi << " tane 0" << endl;
    cout << birlersayisi << " tane 1" << endl;
    cout << ikilersyisi << " tane 2" << endl;
    cout << üclersayisi << " tane 3" << endl;
    cout << dörtlersayisi << " tane 4" << endl;
    cout << beslersayisi << " tane 5" << endl;
    cout << altilarsayisi << " tane 6" << endl;
    cout << yedilersayisi << " tane 7" << endl;
    cout << sekizlersayisi << " tane 8" << endl;
    cout << dokuzlarsayisi << " tane 9" << endl;


    double calismaSuresi = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;

    cout << calismaSuresi << endl;

}
