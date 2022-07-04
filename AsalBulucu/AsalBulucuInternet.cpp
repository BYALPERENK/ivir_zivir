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
    vector <int> asal;

    for (long long int i = 3; i < 1000000000; i=i+2)
    {
        if (isPrime(i))
        {
            asal.push_back(i);
        }
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(finish - start).count() << "macroseconds\n";

    fstream file;
    file.open("vector_file.txt", ios_base::out);

    for (int i = 0; i < asal.size(); i++)
    {
        file << asal[i] << endl;
    }

    file.close();

}