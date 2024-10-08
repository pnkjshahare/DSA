#include <bits/stdc++.h>
using namespace std;
int priority(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '/' || ch == '*')
    {
        return 2;
    }
    else if (ch == '-' || ch == '+')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string InfixToPostFix(string s)
{
    int i = 0;
    stack<char> st;
    string ans = "";
    int n = s.size();
    while (i < n)
    {
        if (s[i] <= 'Z' && s[i] >= 'A' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
        {
            ans = ans + s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != ')')
            {
                ans = ans + st.top();
                st.pop();
            }
        }

        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                ans = ans + st.top();
                st.pop();
            }
            st.push(s[i]);
        }

        i++;
    }
    while (!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout << InfixToPostFix(s);

    return 0;
}