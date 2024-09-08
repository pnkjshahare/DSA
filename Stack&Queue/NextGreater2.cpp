#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> nums)
{
    stack<int> st;
    vector<int> ans;
    int n = nums.size();
    for (int i = (2 * n - 1); i >= 0; i--)
    {
        while (!st.empty() && st.top() <= nums[i])
        {
            st.pop();
        }
        if (i < n)
        {
            int val = st.empty() ? -1 : st.top();
            ans.push_back(val);
        }

        st.push(nums[i % n]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        nums.push_back(no);
    }
    vector<int> ans = {nextGreater(nums)};
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}