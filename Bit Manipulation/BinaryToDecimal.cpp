#include <bits/stdc++.h>
using namespace std;
int BinaryToDecimal(string str){
    int size=str.size();
    int power=1;
    int no=0;
    for(int i=size-1;i>=0;i--){
        if(str[i]=='1'){
            no=no+power;
        }
        power=power*2;
    }
    return no;
}
int main(){
string str;
cin>>str;
cout<<BinaryToDecimal(str);
return 0;
}