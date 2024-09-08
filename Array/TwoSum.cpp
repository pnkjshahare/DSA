#include <bits/stdc++.h>
using namespace std;
int TwoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Yes" << endl;
                break;
            }
        }
    }
    cout << "no" << endl;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    TwoSum(arr,n,k);
    return 0;
}