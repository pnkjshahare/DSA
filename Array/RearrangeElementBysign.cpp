// Rearrange in order + - + -
#include <bits/stdc++.h>
using namespace std;
// Both + and  -ve in equal no.
int Rearrange(int arr[], int n)
{
    vector<int> ans(n, 0);
    int PosIndex = 0, NegIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[PosIndex] = arr[i];
            PosIndex = PosIndex + 2;
        }
        if (arr[i]<0)
        {
            ans[NegIndex] = arr[i];
            NegIndex = NegIndex + 2;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
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
    Rearrange(arr, n);
    return 0;
}