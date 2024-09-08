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
    int leftHeight = maxheight(root->left);
    int rightHeight = maxheight(root->right);
    return 1 + max(leftHeight, rightHeight);
}
int balanceHeight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftHeight(balanceHeight(root->left));
    if (leftHeight == -1)
        return -1;
    int rightHeight(balanceHeight(root->right));
    if (rightHeight == -1)
    {
        return -1;
    }
    if (abs(leftHeight - rightHeight) > 1)
    {
        return -1;
    }
    return 1 + max(leftHeight, rightHeight);
}
bool isBalanced(Node *root)
{
    return balanceHeight(root) != -1;
}
int diameterHeight(Node *root, int &diameter)
{
    if (root == nullptr)
    {
        return 0;
    }
    int lh = diameterHeight(root->left, diameter);
    int rh = diameterHeight(root->right, diameter);
    diameter = max(diameter, lh + rh);
    return 1 + max(rh, lh);
}
int diameterTree(Node *root)
{
    int diameter = 0;
    diameterHeight(root, diameter);
    return diameter;
}

int main()
{
    Node *root = nullptr;
    root = BuildTree(root);
    // cout << "Tree balaneced :" << isBalanced(root);
    int val = diameterTree(root);
    cout << "Diameter of tree :" << val;
}

// input:  3 9 -1 -1 20 15 -1 -1 7 -1 -1
// 1 3 5 7 -1 -1 6 -1 -1 4 -1 -1 2 -1 -1