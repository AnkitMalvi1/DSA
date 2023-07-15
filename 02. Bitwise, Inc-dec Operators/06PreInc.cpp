#include <iostream>
using namespace std;

int main()
{
    int a = 2, i = 3;
    int sum = a + (++i);
    cout << sum << endl;
    cout << i << endl;

    return 0;
}