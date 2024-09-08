#include <bits/stdc++.h>
using namespace std;
int largeElement(int arr[], int n)
{
    int large = arr[0];
    for (int i = 0; i < n; i++) // OPTIMAL SOLUTION
    {

        if (arr[i] > large)
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

    cout << largeElement(arr, n);
    return 0;
}