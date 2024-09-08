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
void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans;
    queue<Node *> q;
    if (root == nullptr)
    {
        return ans;
    }
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();
            if(node->left!=nullptr){
                q.push(node->left);
            }
            if(node->right!=nullptr){
                q.push(node->right);
            }
            level.push_back(node->data);
            //for printing the level
            //cout<<node>data<<" ";
        }
        // cout<<endl;
        ans.push_back(level);
    }
    return ans;
}
int preorderIterative(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        root = st.top();
        st.pop();
        cout << root->data << " ";
        if (root->right != nullptr)
        {
            st.push(root->right);
        }
        if (root->left != nullptr)
        {
            st.push(root->left);
        }
    }
}
// Inoder iterative
void Inorder(Node *root)
{
    Node *node = root;
    stack<Node *> st;
    while (true)
    {
        if (node != nullptr)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty() == true)
                break;
            node = st.top();
            st.pop();
            cout << node->data << " ";
            node = node->right;
        }
    }
}
int main()
{
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    Node *root = nullptr;
    root = BuildTree(root);
    // cout << "Inorder Traversal: ";
    // inorder(root);
    // cout << endl;
    // cout << "preorder Traversal: ";
    // preorder(root);
    // cout << endl;
    // cout << "postorder Traversal: ";
    // postorder(root);
    // cout << endl;
    // cout << "Levelorder :" << endl;
    // levelOrder(root);
    // cout << endl;
    // cout << "Preorder Iterative :";
    // preorderIterative(root);
    // cout << endl;
    // cout << "Inorder traversal :";
    // inorder(root);
    vector<vector<int>>ans={levelOrder(root)};
    int row=ans.size();
    int col=ans[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}