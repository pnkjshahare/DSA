#include <bits/stdc++.h>
using namespace std;
class ImplementStackUsingQue
{
    public :
    queue<int> que;
    void push(int x)
    {
        int size = que.size();
        que.push(x);
        for (int i = 0; i < size; i++)
        {
            que.push(que.front());
            que.pop();
        }
    }
    void popElement()
    {
        que.pop();
    }
    void topElement()
    {
        cout << "Top element is" << que.front() << endl;
    }
    void sizeQue()
    {
        cout << "size of queue" << que.size() << endl;
    }
};
int main()
{
    ImplementStackUsingQue myobj;
    myobj.push(10);
    myobj.topElement();
    myobj.sizeQue();
    myobj.popElement();
    myobj.sizeQue();
    return 0;
}