#include <bits/stdc++.h>
using namespace std;
int DecimalToBinary(int no){
    vector<int>ans;
    
    while(no>0){
        int digit=no%2;
        no=no/2;
        ans.push_back(digit);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
int BinaryTodecimal(int n)
{
    int Dec=0;
    int base = 1;
    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        Dec = Dec + digit * base;
        base = base * 2;
    }
    return Dec;
}
int main()
{
    int n,no;
    // cin >> n;
    cin>>no;
    // int p = BinaryTodecimal(n);
    // cout << p;
    cout << DecimalToBinary(no);
     return 0;
}