// print Duplicate element with occurance

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<"  "<<it.second;
        cout<<endl;
    }
    return 0;
}