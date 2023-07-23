#include <iostream>
using namespace std;

bool isPossible(int stalls[], int k, int mid)
{
    int n;
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int k)
{
    // sort(stalls.begin(),stalls.end());
    int n;
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
        maxi = max(maxi, stalls[i]);
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {4, 3, 2, 1, 5};
    int ans = aggressiveCows(arr, 3);
    cout << ans;

    return 0;
}