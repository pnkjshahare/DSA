#include <bits/stdc++.h>
using namespace std;

// In the right Side no bigger element.
vector<int> LeaderArray(int arr[], int n)
{
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i > 0; i--)
    {
        if (maxi < arr[i])
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
            // maxi=max(maxi,arr[i]);
        }
    }
    for(auto it: ans){
        cout<<it<<" ";
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
    LeaderArray(arr, n);
    return 0;
}