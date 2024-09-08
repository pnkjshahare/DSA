#include <bits/stdc++.h>
using namespace std;
string reverse(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        st.push(str[i]);
    }
    string ans;
    for (int i = 0; i < st.size(); i++)
    {
        char a = st.top();
        ans = ans + a;
        st.pop();
    }
    return ans;
}
int main()
{
    string str;
    cin >> str;
    // reverse(str);
    if (reverse(str) == str)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
bitset<8>binary(8);
cout<<binary.to_string();
    return 0;
}