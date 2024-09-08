#include <bits/stdc++.h>
using namespace std;
int Frequency(int arr[], int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto mp : mpp)
    {
        cout << mp.first << " ->" << mp.second<<endl;
    }
}
int main()
{
    // map<int,int>mpp;
    // mpp.insert(2,2);
    // mpp.insert(10,2);
    // for(auto it : mpp){
    //     cout<<(it).first<<" "<<it.second<<endl;
    // }
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Frequency(arr, n);
    return 0;
}