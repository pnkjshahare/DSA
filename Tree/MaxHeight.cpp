#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BuildTree(Node *root)
{
    cout << "Enter the data :" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for left of tree" << data << endl;
    root->left = BuildTree(root->left);
    cout << "Enter the data for right of tree" << data << endl;
    root->right = BuildTree(root->right);
    return root;
}
int maxheight(Node * root){
    if(root==NULL) return 0;
    int lefthand=maxheight(root->left);
    int righthand=maxheight(root->right);
    return 1+max(lefthand,righthand);
}
int main(){
    // 1 2 -1 -1 3 4 5 -1 -1 -1 6 -1 -1
    Node *root=NULL;
    root=BuildTree(root);
    cout<<maxheight(root);
}