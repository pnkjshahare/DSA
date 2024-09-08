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
class Implementstack
{
public:
    Node *top=nullptr;
    int size = 0;
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        size += 1;
    }
    void pop()
    {
        if (!top)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            Node *temp = top;
            top = temp->next;
            size -= 1;
            delete (temp);
        }
    }
    void topELement()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty" << endl;
        }
        cout << "Top element of stack =>" << top->data << endl;
    }
    void stacksize()
    {
        if (!top)
        {

            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "Size of stack =>" << size << endl;
        }
    }
};
int main()
{
    Implementstack myobj;
    myobj.push(10);
    myobj.topELement();
    myobj.stacksize();
    myobj.pop();
    myobj.stacksize();
    myobj.topELement();
    return 0;
}