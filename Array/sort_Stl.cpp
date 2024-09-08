#include <bits/stdc++.h>
using namespace std;
vector<int> sort_fun(vector<int>v){
    sort(v.begin(),v.end());
    return(v);
}
int main()
{ int n;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {   
        // cin>>v[i];
        cin>>n;
        v.push_back(n);
    }
//     for(auto i=v.begin();i!=v.end();i++){
//         cout<<*i<<'\t';
//     }
//      cout<<endl;
//      reverse(v.begin(),v.end());
//       for(auto i=v.begin();i!=v.end();i++){
//         cout<<*i<<'\t';
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//      for(auto i=v.begin();i!=v.end();i++){
//         cout<<*i<<'\t';
//     }

// // v.insert(v.begin(),100);
// // for(auto x : v){
// //     cout<<x<<" ";
// // }
vector<int>v1;
v1=sort_fun(v);
for(auto x :v1){
    cout<<x<<" ";
}
cout<<endl;
for(auto x :v){
    cout<<x<<" ";
}
   return 0;
 }