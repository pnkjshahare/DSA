#include <bits/stdc++.h>
using namespace std;
// greater than equal to target
int lowerBound(int arr[], int size, int target)
{
    int low = 0;
    int high = size;
    int index = size;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            index = mid;
            high = low - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return arr[index];
}
// strictly greater than target....next greater
int upperBound(int arr[], int size, int target)
{
    int index = size;
    int low = 0;
    int high = size;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return arr[index];
}
int main()
{

    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << "lower bound=> " << lowerBound(arr, n - 1, target) << endl;
    cout << "Upper bound=> " << upperBound(arr, n - 1, target) << endl;
    return 0;
}