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
        }
        else
        {
            break;
        }
        i++;
    }

    return 0;
}