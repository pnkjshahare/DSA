#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    vector<string> pnkj;
    pnkj = {"pankaj shahare"};
    cin >> name;
    for (int i = name.size() - 1; i >= 0; i--)
    {
        cout << name[i];
    }
  
    return 0;
}