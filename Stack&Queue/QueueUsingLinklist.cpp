#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};
class ImplementStack
{
public:
    Node *start = nullptr;
    Node *end = nullptr;
    int size = 0;
    void push(int x)
    {
        Node *temp = new Node(x);
        if (start == nullptr)
        {
            start = end = temp;
        }
        else
        {
            end->next = temp;
        }
        size += 1;
    }
    void pop()
    {
        if (start == nullptr)
        {
            cout << "Queue is empty" << endl;
        }
        Node *temp = start;
        start = start->next;
        delete (temp);
        size -= 1;
    }
    void top()
    {
        if (start == nullptr)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Top element is" << start->data<<endl;
        }
    }
    void sizeQue()
    {
        cout << "Size of Queue" << size << endl;
    }
};
int main()
{

    ImplementStack myobj;
    myobj.push(10);
    myobj.top();
    myobj.sizeQue();
    myobj.pop();
    myobj.sizeQue();
    myobj.top();
    return 0;
}
