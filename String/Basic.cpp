#include <bits/stdc++.h>
using namespace std;
int main(){
    //Input string
    string name;
    // cin>>name;
    // getline(cin,name);
    // cout<<name;

    //**************Append String*****************
    string s1="pankaj";
    string s2="pankaj";
    // s1.append(s2);
    // cout<<s1;
    // s1.clear();
    // cout<<s1;

    //+++++++++++++++Comapare String +++++++++++++
   if(s1.compare(s2)==0){
    cout<<"String are equal"<<endl;
   }
   else{
    cout<<"String are not equal"<<endl;
   }


   //++++++++++++++Empty Function ++++++++++
//    s1.clear();
   if(s1.empty()==true){
    // cout<<"string is empty";
   }

//+++++++++++ Erase ++++++++++++++
s1="pankajShahare";
   s1.erase(2,5);
   cout<<s1;

cout<<endl;
//++++++++find String+++++++++

   cout<<s1.find("are");
   //give first index
cout<<endl;
//+++++++++substring ++++++++++

   cout<<s1.substr(2,5);

cout<<endl;
//++++++++++String to integer+++

   string no="12345";
   int x=stoi(no);
   cout<<x;
   cout<<endl;
   string new_no=to_string(x);
   cout<<new_no;


//Insert ++++++++
cout<<endl;
   s1.insert(0,"pankaj");
   cout<<s1;
return 0;
}