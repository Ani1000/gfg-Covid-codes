struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
// Should print right view of tree

void func(Node*root,int level,int *mlevel)
{
    if(root == NULL)
        return;


    if(*mlevel < level)
    {
        cout<<root->data<<" ";
        (*mlevel)++;
    }

    func(root->right,level+1,mlevel);
    func(root->left,level+1,mlevel);

    return;
}

void rightView(Node *root)
{
   int *m ;
   *m = -1;
   func(root,0,m);
}
