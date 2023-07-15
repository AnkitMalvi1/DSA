#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << " ";
            i++;
        }
    }

    return 0;
}