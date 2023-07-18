#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    return ans;
}

int main()
{
    int ans = power();
    cout << ans << endl;

    int ans2 = power();
    cout << ans2 << endl;

    return 0;
}