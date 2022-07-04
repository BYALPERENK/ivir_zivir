#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>

using namespace std;

bool isPrime(long long int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    // To check through all numbers of the form 6k ± 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{

    auto start = std::chrono::high_resolution_clock::now();
    long long int sayi;
    cout << "Hangi sayi asal mi?" << endl;
    cin >> sayi;

    if (isPrime(sayi))
    {
        cout << "Evet" << endl;
    }
    else
    {
        cout << "Hayir" << endl;
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(finish - start).count() << "microseconds\n";
}