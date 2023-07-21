#include <iostream>
using namespace std;

void findArrayIntersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    int ans;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
}

int main()
{
    int arr[5] = {2, 2, 3, 3, 4};
    int brr[5] = {1, 2, 3, 4, 4};
    // int ans = findArrayIntersection(arr, brr, 5, 5);
    findArrayIntersection(arr, brr, 5, 5);

    return 0;
}