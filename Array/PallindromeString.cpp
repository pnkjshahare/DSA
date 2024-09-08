#include <bits/stdc++.h>
using namespace std;
bool StringPallindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return StringPallindrome(i + 1, s);
}
int main()
{
    string s;
    cin >> s;
    cout << StringPallindrome(0, s);
    // return 0;
}