#include <bits/stdc++.h>
using namespace std;
int RemoveElement(vector<int> &arr, int val)
{
    int index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != val)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << index;
}

int main()
{
    vector<int> arr;
    int n, val;
    cin >> n >> val;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        arr.push_back(no);
    }
    RemoveElement(arr, val);
    return 0;
}