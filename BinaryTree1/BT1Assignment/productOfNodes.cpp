#include<iostream>
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

void displayTree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

int product(Node * root){
    if(root == NULL) return 1;
    return root->val * product(root->left) * product(root->right); 
}
int minimum(Node * root){
    if(root == NULL) return INT_MAX;
    int res = root->val;
    if(minimum(root->left) < res) res = minimum(root->left);
    if(minimum(root->right) < res) res = minimum(root->right);
    return res;
}

int main(){
    Node *a = new Node(11);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(10);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<product(a);
    cout<<endl;
    cout<<minimum(a);
}