#include <bits/stdc++.h>
using namespace std;
int Recursion(int n)
{
    if (n <= 1)
        return n;

    int last = Recursion(n - 1);
    int slast = Recursion(n - 2);
    return last + slast;
}
int main()
{
    int first = 0, second = 1, third = 0;
    for (int i = 1; i < 6; i++)
    {
        third = first + second;
        // cout << third << " ";
        first = second;
        second = third;
        // cout<<Recursion(6);
    }
    cout << third;
    return 0;
}