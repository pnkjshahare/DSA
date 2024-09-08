#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mpp;
    vector<int> ans = {1, 1, 2, 3, 4, 1, 3, 5, 2};
    for (int i = 0; i < ans.size(); i++)
    {
        mpp[ans[i]]++;
    }
    sort(ans.begin(), ans.end(), [&](int n1, int n2)
         {
        if(ans[n1]!=ans[n2]){
            return ans[n1]<ans[n2];
        }
        else{
        return n1>n2;
        } });

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}