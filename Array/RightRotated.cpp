#include <bits/stdc++.h>
using namespace std;
int Reverse(int arr[],int start,int end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }
}
int RightRotated(int arr[],int n,int d){

    Reverse(arr, 0, n-d-1);
    Reverse(arr, n-d, n - 1);
    Reverse(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    RightRotated(arr, n, d);
     return 0;
}