#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        cout << "is prime number.";
    else
        cout << "Not a Prime no.";

    return 0;
}