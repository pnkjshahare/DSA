#include <bits/stdc++.h>
using namespace std;
bool palindrome(string str){
    int size=str.size();
    for(int i=0;i<size/2;i++){
        if(str[i]!=str[size-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
string str;
cin>>str;
cout<<palindrome(str);
return 0;
}