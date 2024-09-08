#include <bits/stdc++.h>
using namespace std;
int reverseNo(int x){
    int no=0;
    while(x!=0){
        int digit=x%10;
        no=no*10+digit;
        x=x/10;
    }
    return no;
}
//Approch 2  :
// convert into string 
//reverse the string
//convert again into no
int main(){
int x;
cin>>x;
cout<<reverseNo(x);
return 0;
}