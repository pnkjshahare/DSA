#include <bits/stdc++.h>
using namespace std;
int setBitByLeftShift(int n,int i){
    return (n|(1<<i));
}
int clearBitByLeftShift(int n,int i){
    return (n&(~(1<<i)));
}
int toggleBit(int n,int i){
    return (n^(1<<i));
}
int removeRightmostBit(int n){
    return (n&(n-1));
}
int NoOfSetBit(int n){
    int cnt=0;
    // while(n>1){
    //     cnt=cnt+(n&1);
    //     n=n>>1;
    // }
    // if(n==1)cnt++;

    while(n!=0){
        n=(n&(n-1));
        cnt++;

    }
    return cnt;

}
bool isPower2(int n){
    return (n&(n-1));
}
int main(){
int n,i;
cin>>n>>i;
cout<<"afte the setting a bit :"<<setBitByLeftShift(n,i)<<endl;
cout<<"After clear the bit :"<<clearBitByLeftShift(n,i)<<endl;
cout<<"After toggle  the bit :"<<toggleBit(n,i)<<endl;
cout<<"After remove rightmost the bit :"<<removeRightmostBit(n)<<endl;
cout<<"No of set bit:"<<NoOfSetBit(n)<<endl;
cout<<"No is power of 2:"<<isPower2(n)<<endl;
return 0;
}