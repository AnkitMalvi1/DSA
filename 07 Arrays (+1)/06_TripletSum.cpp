#include <iostream>
using namespace std;

int tripletSum(int arr[], int size, int s)
{
    int ans;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                    cout << endl;
                }
            }
        }
    }
    // sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int arr[6] = {0, 1, 3, 3, 4, 5};
    tripletSum(arr, 6, 6);

    return 0;
}