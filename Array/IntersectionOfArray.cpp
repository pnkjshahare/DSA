#include <bits/stdc++.h>
using namespace std;
int Intersection(int a[], int b[], int n, int m)
{
    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    Intersection(a, b, n, m);
    return 0;
}