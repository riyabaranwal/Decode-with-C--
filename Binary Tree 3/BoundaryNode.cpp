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

void leftBoundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left == NULL) leftBoundary(root->right);
}
void bottomBoundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)  cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void rightBoundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    rightBoundary(root->right);
    if(root->right == NULL) rightBoundary(root->left);
      cout<<root->val<<" ";
}

int main()
{
  int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,13,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN};
  int n = sizeof(arr)/sizeof(arr[0]);
  Node* root = arr[0];
  leftBoundary(root);
  
} 