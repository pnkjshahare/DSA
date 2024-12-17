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
        this->left = nullptr;
        this->right = nullptr;
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
        return nullptr;
    }
    cout << "Enter the data for left of tree" << data << endl;
    root->left = BuildTree(root->left);
    cout << "Enter the data for right of tree" << data << endl;
    root->right = BuildTree(root->right);
    return root;
}
int maxheight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int lh = maxheight(root->left);
    int rh = maxheight(root->right);
    return 1 + max(lh, rh);
}
int main()
{
    // 1 2 -1 -1 3 4 5 -1 -1 -1 6 -1 -1
    Node *root = nullptr;
    root = BuildTree(root);
    cout << maxheight(root);
}