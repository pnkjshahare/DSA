#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s, int ele)
{
    if (s.size() == 0 || s.top() < ele)
    {
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s, ele);
    s.push(temp);
    return;
}
void reverseStack(stack<int> &s)
{
    if (s.size() == 0)
    {
        return;
    }
    int temp = s.top();
    s.pop();    
    reverseStack(s);
    insert(s, temp);
    return;
}
int main()
{
    stack<int> s;
    s.push(100);
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(5);
    cout << "before reverse:" << " ";
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    s.push(100);
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(5);
    reverseStack(s);
    cout << "After reverse:" << " ";
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}