#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    return arr[n-2];
}
int main(){
    vector<int>arr;
    int t,n,element;
    cout<<"Enter the no of test cases"<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"Enter the size of vector"<<endl;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>element;
           arr.push_back(element);
          
           
        }
         cout<<findSecondLargest(n,arr);
         cout<<endl;
    }

}

