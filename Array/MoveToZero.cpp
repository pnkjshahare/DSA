#include <bits/stdc++.h>
using namespace std;
int MoveZero(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int MoveToZero(int arr[], int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            v.push_back(arr[i]);
        }
    }
    for (int i = v.size(); i < n; i++)
    {
        v.push_back(0);
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
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
    // MoveToZero(arr, n);
    MoveZero(arr, n);
    return 0;
}