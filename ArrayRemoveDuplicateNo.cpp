#include <bits/stdc++.h>
using namespace std;
// Brute force approch
// return the array.
int RemoveElementSTl(vector<int> arr)
{
    set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        st.insert(arr[i]);
    }
    for (auto i : st)
    {
        cout << i << " ";
    }
}
// Return the size of array.
int RemoveDuplicate(int n, vector<int> arr)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[j] != arr[i])
        {
            arr[j + 1] = arr[i];
            j++;
        }
    }

    return j+1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        arr.push_back(no);
    }
    RemoveElementSTl(arr);
    cout<<endl;
        cout << RemoveDuplicate(n, arr);
        return 0;
}