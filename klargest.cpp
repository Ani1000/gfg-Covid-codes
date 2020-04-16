/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    int lCount;

    Node* left;
    Node* right;
};*/
int n(Node *r)
{
    if(r)
    return 1+n(r->left)+n(r->right);
    return 0;
}
int KthSmallestElement(Node *root, int k)
{
    if(root)
    {
     if(n(root->left)==k-1)
     return root->data;
     else if(n(root->left)>k-1)
     return KthSmallestElement(root->left,k);
     else
     return KthSmallestElement(root->right,k-1-n(root->left));
    }
    //add code here.
}



