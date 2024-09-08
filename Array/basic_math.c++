#include <bits/stdc++.h>
#include<vector>
using namespace std;
int divisor(int n){
    vector<int>arr;
    for(int i=1;i*i<n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
        if((n/i)!= i){
           arr.push_back(n/i);   
        }
    }
    sort(arr.begin(),arr.end());
    // for(auto x=arr.begin();x !=arr.end();x++);{
    //     cout<<* x <<'\t';
    // }
    for(auto i=arr.begin();i!=arr.end();i++){
        cout<<*i<<'\t';
    
}
}
int main()
{
    vector<int>arr;
    int n,sum_T=0;
    cin >> n;
    // while(n>0){
    //     int digit1=0;
    //     digit1=n%10;
    //     n=n/10;
    //     cout<<digit1<<endl;
    //     num=num*10+digit1;

    // }
    // for (int i = 1; i <= n; i++)
    // { int sum = 0;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             sum=sum+j;
    //         }
    //     }
    //     sum_T=sum_T+sum;
    // }
    // cout<<sum_T;
    divisor(n);
    return 0;
}