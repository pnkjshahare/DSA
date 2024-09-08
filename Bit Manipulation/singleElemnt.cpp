#include <bits/stdc++.h>
using namespace std;
int singleElementByMap(vector<int>&arr){
    map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto it :mpp){
        if(it.second==1){
            return it.first;
        }
    }
}
int singleElementByXor(vector<int>&arr){
    int val=0;
    for(int i=0;i<arr.size();i++){
        val=val^(arr[i]);
    }
    return val;
}
int main(){
vector<int>arr={10,10,20,30,30,30};
// cout<<singleElementByMap(arr);
cout<<singleElementByXor(arr);
return 0;
}