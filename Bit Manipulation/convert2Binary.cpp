#include <bits/stdc++.h>
using namespace std;
string convert2binary(int n){
    string res="";
    while(n!=0){
        if(n%2==1){
            res=res+"1";
        }
        else{
            res=res+"0";
        }
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int n;
    cin>>n;
cout<<convert2binary(n);
return 0;
}