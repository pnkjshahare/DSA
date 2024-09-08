// linlist using recursion
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
int LengthOfLinkList(Node *head)
{
    int cnt = 0;
    while (head != nullptr)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}
int LengthOfLinkListUsingRecursion(Node *head, int &len)
{
    if (head == nullptr)
    {
        return 0;
    }
    len++;
    LengthOfLinkListUsingRecursion(head->next, len);
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
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;
    return head;
}
Node *print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *printUsingRecursion(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    cout << head->data << " ";
    printUsingRecursion(head->next);
}
Node *reverse(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node *lasthead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return lasthead;
}
Node *reverseIterative(Node *head)
{
    Node *front;
    Node *prev = NULL;
    Node *curr = head;
    Node *temp = head;
    while (temp != NULL)
    {
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
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
    printUsingRecursion(head);
    int len = 0;
    // LengthOfLinkListUsingRecursion(head, len);
    // cout << "\nlength of linklist :" << len;
    // head = printUsingRecursion(head);
    // printUsingRecursion(head);
    reverseIterative(head);
    print(head);
    return 0;
}