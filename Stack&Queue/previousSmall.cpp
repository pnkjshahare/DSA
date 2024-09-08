#include <bits/stdc++.h>
using namespace std;
//method 1
int previousSmall(vector<int> nums, int index)
{
    int small = nums[index];
    for (int i = 0; i < index; i++)
    {
        if (nums[i] < small)
        {
            small = nums[i];
        }
    }
    if (small == nums[index])
    {
        return -1;
    }
    return small;
}
// standard method

vector<int> smallPrevious(vector<int> nums)
{
    stack<int> st;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        while (!st.empty() && st.top() >= nums[i])
        { 
            st.pop();
        }
        int val = st.empty() ? -1 : st.top();
        ans.push_back(val);
        st.push(nums[i]);
    }

    return ans;
}
int main()
{

    int n;

    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        nums.push_back(no);
    }
 vector<int> ans={smallPrevious(nums)};
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}