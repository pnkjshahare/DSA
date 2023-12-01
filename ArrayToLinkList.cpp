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
Node *ArrayToLinkList(vector<int> arr)
{

    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int LengthOfLinkList(Node *head){
    int cnt=0;
 while (head != nullptr)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}
int main()
{

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    Node *head = ArrayToLinkList(arr);
    cout <<"head of LinkList:"<< head->data << endl;

    cout<<"Length of Linklist : ";
    cout<<LengthOfLinkList(head);
    return 0;
}