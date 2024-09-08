#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> v, int target, int low, int high)
{
        int mid = (low + high) / 2;
        if (low > high)
        {
            return -1;
        }
        if (v[mid] == target)
            return mid;
        else if (v[mid] < target)
        {
            return BinarySearch(v, target, mid + 1, high);
        }
        else
        {
            return BinarySearch(v, target, low, mid - 1);
        }
}
int main()
{
    vector<int> v;
    int n, target;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }
    cout << BinarySearch(v, target, 0, n - 1);
    return 0;
}