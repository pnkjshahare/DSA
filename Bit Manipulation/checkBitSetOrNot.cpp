#include <bits/stdc++.h>
using namespace std;
bool checkSetOrNotLeftShift(int n,int i){
    if((n&(1<<i))!=0){
        return true;
    }
    else{
        return false;
    }
}
bool checkSetOrNotRightShift(int n,int i){
    if(((n>>i)&1)==1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
int n,i;
cin>>n>>i;
cout<<"check by left shift : "<<checkSetOrNotLeftShift(n,i)<<endl;
cout<<"check by right shift : "<<checkSetOrNotRightShift(n,i)<<endl;
return 0;
}