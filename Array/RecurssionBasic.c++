#include <bits/stdc++.h>
using namespace std;
int print(int n)
{
    // base condition
    if (n == 0)
    {
        return 0;
    }
    else
    {
        cout << n << endl;
        print(n - 1);
        cout << n << endl;
    }
}
int sum(int n)
{
    int sum1 = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {

        return n + sum(n - 1);
        //  return (sum1=sum1+n);
    }
}
int sum1(int i, int total)
{
    if (i < 0)
    {
        cout << total << endl;
        return 0;
    }
    else
    {
        sum1(i - 1, total + i);
    }
}
int ReverseArray(int S, int E, int arr[])// S-->start, E-->End
{ int p=E;
    if (S >= E/2)
    {
         return 0;
        // for(int i=0;i<=p;i++){
        //     cout<<arr[i]<<endl;
        // }
    }
    else
    {
        swap(arr[S], arr[E-S-1]);
        ReverseArray(S + 1,E, arr);
    }

}
vector<int> printt(int x){
    vector<int>v;
    if(x<0){
        return v;
    }
    else{
        printt(x-1);
        v.push_back(x);
    }
}
int main()
{ vector<int>v1;
    // int n;
    // cout<<"Enter the size of array"<<endl;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    // // print(n);
    // ReverseArray(0, n, arr);
    // // sum1(3,0);
    // for(int i=0;i<n;i++){
    //         cout<<arr[i]<<endl;
    //     }
        v1=printt(5);
        
    return 0;
}
