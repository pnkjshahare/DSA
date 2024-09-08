#include <bits/stdc++.h>
using namespace std;
int unionArray(int a[], int b[], int n, int m)
{
    vector<int> unionAr;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (unionAr.size() == 0 || unionAr.back() != a[i])
            {
                unionAr.push_back(a[i]);
            }
            i++;
        }
        else{
            if (unionAr.size() == 0 || unionAr.back() != b[j])
            {
                unionAr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<m){
        if (unionAr.size() == 0 || unionAr.back() != b[j])
        {
            unionAr.push_back(b[j]);
        }
        j++;
    }
    while(i<n){
        if (unionAr.size() == 0 || unionAr.back() != a[i])
        {
            unionAr.push_back(a[i]);
        }
        i++;
    }
    for(auto i : unionAr){
        cout<<i<<" ";
    }
}
int main()
{
    set<int> st;
    int n, m;
    cin >> n >> m;
    int arr[n], arr1[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // st.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        // st.insert(arr1[i]);
    }
    unionArray(arr, arr1, n,m);
        // for (auto i : st)
        // {
        //     cout << i << " ";
        // }
        return 0;
}