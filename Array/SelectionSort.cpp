#include <bits/stdc++.h>
using namespace std;
int Sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i, temp = 0;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min=j; 
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
    Sort(arr, n);
    return 0;
}