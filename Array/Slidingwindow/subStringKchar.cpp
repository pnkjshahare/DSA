#include<bits/stdc++.h>
using namespace std;
int subString(string s,int k){
  int maxlen=0;
  int left=0;
  int right=0;
  int n=s.size();
  map<char,int>mpp;
  while(right<n){
  mpp[s[right]]++;
  if(mpp.size()>k){
    mpp[s[left]]--;
    if(mpp[s[left]]==0){
      mpp.erase(s[left]);
    }
    left++;
  }
  if(mpp.size()<=k){
  maxlen=max(maxlen,right-left+1);
  }
  right++;
  }

return maxlen;
}
int main(){
string s="aaaaacvsbbbb";
cout<<subString(s,2);

return 0;
}
