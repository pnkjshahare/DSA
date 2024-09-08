#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stack;
    queue<int> que;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(600);
    cout << "top element of stack"<<stack.top() << endl;
    // cout<<stack.peak();
    cout << "is stack empty or not"<<stack.empty()<<endl;

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(600);
    cout <<"top element of queue"<<que.front()<< endl;
    que.pop();
    cout<<"size of queue"<<que.size()<<endl;
    return 0;
}