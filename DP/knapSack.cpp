#include <bits/stdc++.h>
using namespace std;
int knapsack(int wt[], int val[], int w, int size, vector<vector<int>> dp)
{
    if (size < 0 || w == 0)
    {
        return 0;
    }
    if (dp[size][w] != -1)
    {
        return dp[size][w];
    }
    // choice diagram
    if (wt[size] <= w)
    {
        return dp[size][w] = (max((val[size] + knapsack(wt, val, w - wt[size], size - 1, dp)), knapsack(wt, val, w, size - 1, dp)));
    }
    else if (wt[size] > w)
    {
        return dp[size][w] = knapsack(wt, val, w, size - 1, dp);
    }
}
int main()
{
    int wt[6] = {10, 2, 2, 2, 2, 2};
    int val[6] = {100, 100, 100, 100, 1, 1};
    int w = 10;
    vector<vector<int>> dp(6, vector<int>(w + 1, -1));
    int profit = knapsack(wt, val, w, 5, dp);
    cout << profit << endl;
    return 0;
}