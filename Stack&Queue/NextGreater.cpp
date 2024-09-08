#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> nums)
{
    stack<int> st;
    vector<int> ans;
    int size = nums.size() - 1;
    for (int i = size; i >= 0; i--)
    {
        if (st.empty())
        {
            ans.push_back(-1);
        }
        else if (st.top() > nums[i])
        {
            ans.push_back(st.top());
        }
        else
        {
            int cnt = 0;
            while (!st.empty())
            {
                if (st.top() > nums[i])
                {
                    ans.push_back(st.top());
                    cnt = 1;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
            if (st.empty() && cnt == 0)
            {
                 ans.push_back(-1);
            }
        }

        st.push(nums[i]);
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