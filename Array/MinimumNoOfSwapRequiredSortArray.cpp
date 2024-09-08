#include <bits/stdc++.h>
using namespace std;
int Minimum(int arr[], int n)
{
    unordered_map<int, int> mpp;
    int cnt = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        ans[i] = arr[i];
    }
    sort(ans.begin(), ans.end());
    for(int i=0;i<n;i++){
        if(arr[i] !=ans[i]){
            cnt++;
            int temp=arr[i];
            swap(arr[i],mpp[ans[i]]);
            mpp[temp]=mpp[ans[i]];
            mpp[ans[i]]=i;
        }
    }
    return cnt;
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
   int p= Minimum( arr, n);
   cout<<p;
     return 0;
}