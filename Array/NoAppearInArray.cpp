// duplicating finding in array
// Hashing 
#include <bits/stdc++.h>
using namespace std;
// Brute force approch
int counting(int n, int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    return count;
    
}
int main()
{
    //  ********* brute force method
    //       int n,size;
    //     cin>>size;
    //     int arr[size];
    //     for (int i = 0; i < size; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     cin>>n;
    //    cout<< counting(n,arr,size);

    //--------------------Hashing------
    int n;
    cin >> n; // size of array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hash[13] = {0}; // computing hash array
    for (int j = 0; j < n; j++)
    {
        hash[arr[j]] = hash[arr[j]]+1;
        // hash[arr[j]]++;
    }
    //computing by map
    map<int, int> mpp;
    for (int j = 0; j < n; j++)
    {
        mpp[arr[j]]++;
    }
    int q; // no of query...
    cin >> q;
    for (int i = q - 1; i >= 0; i--)
    {
        int number;
        cin >> number;
        cout << number << "->" << hash[number] << endl;
        // cout << mpp[number] << endl;
    }

    // **************MApping******

    return 0;
}
