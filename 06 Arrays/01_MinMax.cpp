#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
    int mini = num[n - 1];
    for (int i = 0; i < n; i++)
    {
        // if (num[i] < mini)
        //     mini = num[i];
        mini = min(mini, num[i]);
    }
    return mini;
}

int getMax(int num[], int n)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] > maxi)
        //     maxi = num[i];
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int main()
{
    int size;
    cin >> size;
    int num[10];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << getMin(num, size) << " ";
    cout << getMax(num, size) << " ";

    return 0;
}