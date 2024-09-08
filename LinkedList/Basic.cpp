#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next)
    {
        data = data1;
        next = next;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
int main()
{
    int arr[2] = {10, 20};
    Node *y = new Node(arr[0]);
    cout << "Address of next node :" << y->next << endl;
    cout << "Data of this node :" << y->data;
    return 0;
}