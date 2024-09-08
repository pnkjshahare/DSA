#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
// pair <int,int> p={10,20};
// cout<<p.first<<p.second<<endl;
// pair<pair<int, int>, pair<int,int>> p={{5,6},{2,3}};
// cout<<p.second.second<<endl;
// cout<<p.first.second<<endl;
vector<int>v(5);
vector<int>v1(5);
vector<int>::iterator it=v.begin();    //---->(size, value of vector if all same)
v={10,20,30,40,50};    //---> declaring the vector
// for(int i=0;i<5;i++){
    // cout<<v[i]<<" ";    
// }
// erasing the data of vector:
v.erase(v.begin()+1,v.begin()+3);
for(vector<int>::iterator it=v.begin();it != v.end();it++){
cout<<*(it)<<" ";
}
cout<<endl;
//inseting the data in the vector:
v.insert(v.begin(),2,50);
for(vector<int>::iterator it=v.begin();it != v.end();it++){
cout<<*(it)<<" ";
}
cout<<endl;
//sieze of vector :
cout<<v.size();
v.swap(v1);
//printing the v1 :
cout<<endl;
for(auto itt=v1.begin();itt!=v1.end();itt++){
    cout<<*(it)<<" ";
}
return 0;
}