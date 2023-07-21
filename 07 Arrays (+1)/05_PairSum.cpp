#include <iostream>
using namespace std;

int pairSum(int arr[], int size, int s)
{
    int ans;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                // int temp;
                // temp = min(arr[i], arr[j]);
                // temp = max(arr[i], arr[j]);
                // ans = temp;
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    // sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int arr[6] = {0, 1, 2, 3, 4, 5};
    pairSum(arr, 6, 6);

    return 0;
}