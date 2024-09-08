#include <bits/stdc++.h>
using namespace std;
int main(){
string name="SGGS";
transform(name.begin(),name.end(),name.begin(),::tolower);
cout<<name<<endl;
transform(name.begin(),name.end(),name.begin(),::toupper);
cout<<name<<endl;
string no="345678098765";
sort(no.begin(),no.end(),greater<int>());
cout<<no<<endl;
return 0;
}