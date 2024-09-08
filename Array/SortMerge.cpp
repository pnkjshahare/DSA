#include <bits/stdc++.h>
using namespace std;
int Merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (low <= mid && right <= high)
    {
        if (left <= right)
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= right)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= left)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    // int n = sizeof(arr)/sizeof(int);
    //  for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}
int MergeSort(int arr[], int low, int high)
{
    // int m=high+1;
    int mid = (high + low) / 2;
    if (low == high)
    {
        return 0;
    }
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
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
    MergeSort(arr, 0, n - 1);
    return 0;
}