#include <iostream>
using namespace std;

int main()
{
    for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--)
    {
        cout << "\n"
             << a << " " << b;
    }

    return 0;
}