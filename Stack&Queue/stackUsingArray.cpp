#include <bits/stdc++.h>
using namespace std;
class stackImplement
{
public:
    int arr[100];
    int top = -1;
    void push(int n)
    {
        top = top + 1;
        arr[top] = n;
    }
    void pop()
    {
        int p = top;
        top = top - 1;
        // return arr[top];
    }
    void topElement()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        cout << "Top element is :"<<arr[top]<<endl;
    }
    void size()
    {
        cout << top + 1;
    }
    void print()
    {
        for (int i = top; i>=0; i--)
        {
            cout << arr[i] << " " << endl;
        }
    }
};
int main()
{
    //class-name object-name
    stackImplement obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.print();
    obj.topElement();
    obj.pop();
    obj.topElement();
    obj.size();
    return 0;
}