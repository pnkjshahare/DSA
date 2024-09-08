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
Node *print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *printUsingRecursion(Node * head){
    if(head==nullptr){
        return 0;
    }
    cout<<head->data<<" ";
    head=head->next;
    printUsingRecursion(head);
}
Node *printKfromLast(Node *head,int &k){
    if(head==nullptr){
        return 0;
    }
    printKfromLast(head->next,k);
    // p++;
    k--;
    if(k==0){
        cout<<head->data<<" ";
    }
}
int main(){
int n,k;
    cin >> n;
    cin>>k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    Node *head = ArrayToLinkList(arr);
    cout<<"complete Linklist :";
    // print(head);
    // printUsingRecursion(head);
    printKfromLast(head,k);
return 0;
}