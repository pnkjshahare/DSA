#include <bits/stdc++.h>
using namespace std;
string reverse(string str){
    int size=str.size();
    for(int i=0;i<size/2;i++){
        swap(str[i],str[size-i-1]);
    }
    return str;
}
int main(){
string str;
cin>>str;
cout<<reverse(str);
return 0;
}