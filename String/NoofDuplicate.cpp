#include <bits/stdc++.h>
using namespace std;
int main(){
unordered_map<char,int>mpp;
string name;
cin>>name;
for(int i=0;i<name.size();i++){
    mpp[name[i]]++;
}
for(auto it:mpp){
    cout<<it.first<<"->"<<it.second<<endl;
}
return 0;
}