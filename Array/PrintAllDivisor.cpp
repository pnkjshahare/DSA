#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> ans;
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (n % i != i)
            {
                ans.insert(n / i);
            }
            ans.insert(i);
        }
    }
    // sort(ans.begin(), ans.end());
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}