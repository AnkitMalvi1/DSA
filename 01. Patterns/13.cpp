#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char row = 1;
    while (row <= n)
    {
        char col = 1;
        char ch = ('A' + row + col - 2);
        while (col <= n)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}