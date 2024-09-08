#include <bits/stdc++.h>
using namespace std;
int print(int n, int arr[])
{
    if (n <= 0)
    {
        return 0;
    }
    cout << arr[n - 1] << endl;
    print(n - 1, arr);
}
int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(n, arr);
}
