#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
void BubbleSort(vector<int> &arr)
{
    int n = arr.size();
    int didSwap = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        // if (didSwap == 0)
        // {
        //     break;
        // }
        // cout << "runs" << endl;

        cout<<"swaping of"<<n-i <<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
void InsertionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
            // cout << "runs" << endl;
        }
        cout<<"swaping of"<<i <<endl;
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<int> arr = {13,46,24,52,20,9};
    // selectionSort(arr);
    // BubbleSort(arr);
    InsertionSort(arr);
    // InsertionSort(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
