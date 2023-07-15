#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = a++;                 // 1
    int c = ++a;                 // 3
    cout << "b = " << b << endl; // output:  1 (incremented value
    cout << c << endl;

    return 0;
}