#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        mp[no]++;
    }
    cout<<mp.size();
    for(auto pr: mp){
        cout<<pr.first<<"->"<<pr.second<<endl;
    }
    return 0;
}