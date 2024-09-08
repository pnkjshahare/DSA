#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (a > b)
    {
       if(a%b>1) return a/b;
       else 
       return b;
    }
    else
    {
        if(b%a>1) return b/a;
        else
        return a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << GCD(a % b, b);
    }
    else
    {
        cout << GCD(b % a, a);
    }
    return 0;
}