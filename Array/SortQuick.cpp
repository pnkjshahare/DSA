#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int high, int low)
{
    int pivot = arr[low];
    int count = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place the pivot at right place
    int pivotIndex = low + count;
    swap(arr[pivotIndex], arr[low]);
    int i = low;
    int  j = high;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
int QuickSort(int arr[], int high, int low)
{
    if (low >= high)
    {
        return 0;
    }
    int p = partition(arr, high, low);
    QuickSort(arr,p-1,low);
    QuickSort(arr, high, p+1);
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
    QuickSort(arr, n - 1, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}