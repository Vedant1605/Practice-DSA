#include <bits/stdc++.h>
using namespace std;
class BST_Node
{
public:
    int data;
    BST_Node *left;
    BST_Node *right;
};
BST_Node *getNewNode(int data)
{
    BST_Node *t = new BST_Node;
    t->data = data;
    t->left = 0;
    t->right = 0;
    return t;
}
BST_Node *insert_in_tree(BST_Node *root, int data)
{
    // agar rooot null hua toh apan naya node ka address root p laga kr
    // root return kr rhe h
    if (root == NULL)
    {
        root = getNewNode(data);
        return root;
    }
    else if (data > root->data)
        root->right = insert_in_tree(root->right, data);
    else
        root->left = insert_in_tree(root->left, data);
    return root;
}
bool search_in_BST(BST_Node *root, int data)
{
    if (root == NULL)
        return false;
    cout << root->data << " ";
    if (data == root->data)
        return true;
    else if (data >= root->data)
        search_in_BST(root->right, data);
    else
        search_in_BST(root->left, data);
}
int height_of_tree(BST_Node *root)
{
    if (root == NULL)
        return -1; //-1 coz height of a empty tree is -1 and height of 1 node tree is 0z
    // height of tree =max of height of left and right sub tree +1
    return max(height_of_tree(root->left), height_of_tree(root->right)) + 1;
}
int Max(BST_Node *root)
{
    if (root == NULL)
        return -1;
    else if (root->right == NULL)
        return root->data;
    return Max(root->right);
}
void level_order_traversal(BST_Node *root)
{
    if (root == NULL)
        return;
    queue<BST_Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        BST_Node *current = Q.front();
        cout << current->data << " ";
        if (current->left != NULL)
            Q.push(current->left);
        if (current->right != NULL)
            Q.push(current->right);
        Q.pop();
    }
}
void preorder(BST_Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(BST_Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(BST_Node *root)
{
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
bool is_BST(BST_Node *root, int min_val, int max_val)
{
    if (root == NULL)
        return true;
    if (root->data > min_val 
    && root->data < max_val 
    && is_BST(root->left, min_val, root->data) 
    && is_BST(root->right, root->data, max_val))
        return true;
    else
        return false;
}
int main()
{
    BST_Node *root = NULL;
    vector<int> tree_data = {2, 2, 13, 7, 10, 1, 10, 5, 2, NULL, 14, 5, 11, 5, 5, 13};
    for (auto i : tree_data)
    {
        root = insert_in_tree(root, i);
    }
    search_in_BST(root, 7) ? cout << "YESS" << endl : cout << "NO" << endl;
    cout << height_of_tree(root);
    cout << endl;
    cout << Max(root);
    cout << endl;
    level_order_traversal(root);
    cout << endl;
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    cout << is_BST(root, INT_MIN, INT_MAX) << endl;
    return 0;
}