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
bool isleaf(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL&&root->right==NULL){
        return true;
    }
    return false;
}
int sumOfleftLeaf(Node *root){
    int sum=0;
    if(root==NULL)return 0;
    if(isleaf(root->left)){
        sum=sum+root->left->data;
    }
    sum=sum+sumOfleftLeaf(root->left);
    sum=sum+sumOfleftLeaf(root->right);
    return sum;
}
int main(){
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    Node *root=NULL;
    root=BuildTree(root);
    cout<<sumOfleftLeaf(root);

}