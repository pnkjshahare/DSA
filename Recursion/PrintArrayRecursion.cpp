#include <bits/stdc++.h>
using namespace std;
int print(int arr[],int n,int index){
    // int d=n;
    
    if(index==n){
        return 0;
    }
    cout<<(arr[index])<<" ";
    print(arr,n,index+1);
}
int main(){
int arr[]={10,20,30,40,50,60,70,80,90,100};
int n=10;
int index=0;
print(arr,n,index);
return 0;
}