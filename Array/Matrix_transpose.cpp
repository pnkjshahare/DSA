#include <bits/stdc++.h>//incomplete
using namespace std;
int main()
{
    int arr[3][3],c;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=arr[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if(i>j){
            c=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=c;
            // cout<<arr[i][j];
            // cout<<'\t';
           }
        }
        // cout<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}