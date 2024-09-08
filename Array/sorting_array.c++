#include<bits/stdc++.h>
using namespace std;
int main(){
int a[5],p=0;
for(int i=0;i<5;i++){
    cin>>a[i];
}
for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
        if(a[i]>a[j]){
            p=a[i];
            a[i]=a[j];
            a[j]=p;
        }
    }
}
for(int i=0;i<5;i++){
    cout<<a[i]<<'\t';
}
return 0;
}