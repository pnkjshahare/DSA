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
Node *RemoveHead(Node *head)
{
    if (head == nullptr)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *RemoveTail(Node *head)
{
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;
    return head;
}
Node * InsertAtHead(Node * head, int value){
    Node * temp=new Node(value);
    temp->next=head;
    return temp;
}
Node *print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
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
    cout << "head of LinkList:" << head->data << endl;
    cout<<"complete Linklist :";
    print(head);
    head=RemoveHead(head);
    cout<<"Remove Head :";
    print(head);
    cout<<"Remove Tail :";
    head=RemoveTail(head);
    print(head);
    head=InsertAtHead(head, 200);
    cout<<"Insert at head  :";
    print(head);
    return 0;
}