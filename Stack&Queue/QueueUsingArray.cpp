#include <bits/stdc++.h>
using namespace std;
class MyQue
{
public:
    int que[10];
    int size = 10;
    int currSize = 0;
    int start = -1, end = -1;
    void push(int element)
    {
        if (currSize > size)
        {
            cout << "Queue is full" << endl;
        }
        if (currSize == 0)
        {
            start = 0, end = 0;
        }
        else
        {
            end = (end + 1) % size;
        }
        que[end] = element;
        currSize += 1;
    }
    void pop()
    {
        if (currSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        int ele = que[start];
        if (currSize == 1)
        {
            start = -1, end = -1;
        }
        else
        {
            start = (start + 1) % size;
        }
        currSize -= 1;
        cout << "Pop element =>" << ele << endl;
    }
    void top()
    {
        if (start == -1)
        {
            cout << "Queuue is empty" << endl;
        }
        else
        {
            cout << "top element is =>" << que[start] << endl;
        }
    }
    void Quesize()
    {
        cout << "Size of queue =>" << currSize << endl;
    }
};
int main()
{

    MyQue myobj;
    myobj.push(10);
    myobj.top();
    myobj.pop();
    myobj.top();
    myobj.Quesize();
    return 0;
}