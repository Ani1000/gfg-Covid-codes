void inorder(multiset<int> &s,Node *root)
{
if(root)
{
inorder(s,root->left);
s.insert(root->data);
inorder(s,root->right);
}

}

void merge(Node *root1, Node *root2)
{
multiset<int> s;
inorder(s,root1);
inorder(s,root2);
multiset<int>::iterator it=s.begin();
for(;it!=s.end();++it)
std::cout<<*it<<" ";

}




















