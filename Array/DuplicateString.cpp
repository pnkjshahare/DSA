#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int hash[256]={0};
for(int i=0;i<s.size();i++){
   hash[s[i]]++; 
}
int q;
cin>>q;
for(int i=0;i<q;i++){
    char no;
    cin>>no;
    // if only lowercase the hash[no-'a'] hash[no-'A']
    cout<<no <<"->"<<hash[no]<<endl;
}
return 0;
}