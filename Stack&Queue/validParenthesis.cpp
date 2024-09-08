#include <bits/stdc++.h>
using namespace std;
bool checkValid(string parenthesis)
{
    int size = parenthesis.size();
    stack<char> st;
    for (int i = 0; i < size; i++)
    {
        if (st.empty())
        {
            st.push(parenthesis[i]);
        }
        else if (st.top() == '{' && parenthesis[i] == '}' || st.top() == '[' && parenthesis[i] == ']' || st.top() == '(' && parenthesis[i] == ')')
        {
            st.pop();
        }
        else
        {
            st.push(parenthesis[i]);
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string parenthesis;
    cin >> parenthesis;
    if(checkValid(parenthesis)){
        cout<<"Valid Parenthesis"<<endl;
    }
    else{
        cout<<"Invalid Parenthesis"<<endl;
    }
    return 0;
}