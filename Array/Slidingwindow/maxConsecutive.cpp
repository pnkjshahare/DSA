#include <bits/stdc++.h>
using namespace std;
int maxconsecutive(vector<int> nums, int k)
{
    int n = nums.size();
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        int zero = 0;
        for (int j = i; j < n; j++)
        {
            if (nums[j] == 0)
            {
                zero++;
            }
            if (zero <= k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
            else
            {
                break;
            }
        }
    }
    return maxLen;
}
int optimal(vector<int> nums, int k)
{
    int maxLen = 0;
    int left = 0, right = 0, n = nums.size();
    int zero = 0;
    while (right < n)
    {

        if (nums[right] == 0)
        {
            zero++;
        }
        if (zero > k)
        {
            if (nums[left] == 0)
            {
                zero--;
            }
            left++;
        }
        if (zero <= k)maxLen=max(maxLen,right-left+1);
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }
    return maxLen;
}
int main()
{
    vector<int> nums = {1, 0, 0, 1, 1, 1, 1, 1, 1, 0};
    cout << optimal(nums, 2);
    return 0;
}