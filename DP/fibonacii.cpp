#include <bits/stdc++.h>
using namespace std;
int fibonacii(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = fibonacii(n - 1, dp) + fibonacii(n - 2, dp);
}
int main()
{
    int n;
    cout << "Enter the no of which fibonacii find out ?" << endl;
    cin >> n;
    vector<int> dp(n + 1, -1);
    int value = fibonacii(n, dp);
    cout << "Answer is :" << value << endl;
}