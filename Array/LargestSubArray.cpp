#include <bits/stdc++.h>
using namespace std;
int LongSubArray(int arr[], int n, int k)
{
    int sum = 0;
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }


            
        }
    }
    cout << len;
}
int main()
{
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    LongSubArray(arr, n, k);
    return 0;
}
