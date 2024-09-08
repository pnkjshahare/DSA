#include <bits/stdc++.h>
using namespace std;
int SecondLargeBrut(int arr[], int n)
{
    // sort(arr[0], arr[n - 1]);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    int large = arr[n-1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != large)
            large = arr[i];
        break;
    }
}
int SecondLargest(int arr[], int n)
{
    int large = 1, slarge = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < large && slarge < arr[i])
        {
            slarge = arr[i];
        }
    }

    return slarge;
}
int Secondminimum(int n, int arr[])
{
    int small = INT_MAX, large = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > small && arr[i] < large)
        {
            large = arr[i];
        }
    }
    return large;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << SecondLargest(arr, n) << " " <<Secondminimum(n, arr);
    cout << SecondLargeBrut(arr, n);

    return 0;
}