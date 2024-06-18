#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
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
int noOfLevel(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(noOfLevel(root->left), noOfLevel(root->right));
}
void nthLevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level){
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, curr + 1, level);
    nthLevel(root->right, curr + 1, level);
}
void nthLevelReverse(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level){
        cout << root->val << " ";
        return;
    }
    nthLevelReverse(root->right, curr + 1, level);
    nthLevelReverse(root->left, curr + 1, level);
    
}
void levelOrder(Node* root){
    int n = noOfLevel(root);
    for(int i = 1; i <= n ; i++){
        // nthLevel(root,1,i);
        // cout<<endl;
        nthLevelReverse(root , 1 , i);
        cout<<endl;


    }
}
void levelOrderQueue(Node *root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node *temp = q.front();
        q.pop();
        cout<<temp->val;
        if(temp->left !=NULL)q.push(temp->left);
        if(temp->right !=NULL)q.push(temp->right);
    }
    cout<<endl;

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
    //nthLevel(a,1,1);
    levelOrder(a);
}