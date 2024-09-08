#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], arr1[3][3], arr2[3][3];
    cout << "Enter the first array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the second array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "final result" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}