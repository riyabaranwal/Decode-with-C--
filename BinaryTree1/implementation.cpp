#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int sumTreeNodess(Node *root)
{
    if (root == NULL)
        return 0;
    return root->val + sumTreeNodess(root->left) + sumTreeNodess(root->right);
}
int size(Node *root)
{
    // no. of nodes
    if (root == NULL)
        return 0;
    return 1 + size(root->left) + size(root->right);
}
int maximumval(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->val, max(maximumval(root->left), maximumval(root->right)));
}
int noOfLevel(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(noOfLevel(root->left), noOfLevel(root->right));
}
// int diameterOfBinaryTree(Node* root) {
//          if (root == NULL)
//         return ;
//         return max(diameterOfBinaryTree(root->left)+ diameterOfBinaryTree(root->right));
//     }
void displayTree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(77);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout << endl;
    cout << sumTreeNodess(a);
    cout << endl;
    cout << size(a);
    cout << endl;
    cout << maximumval(a);
    cout << endl;
    cout << noOfLevel(a);
}

