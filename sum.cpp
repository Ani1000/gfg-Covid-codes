#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

auto& sum(auto  )

 int main(){

  int a,b;

  cin>>a>>b;

  sum(a,b);

return 0;
 }

 int cnt = 0;
void extractKeys(Node *root, auto &sets)
{
    // base case
    if (root == nullptr)
        return;

    extractKeys(root->left, sets);
    sets.insert(root->data);
    extractKeys(root->right, sets);
}


Node* convert(Node* root,auto &it){

   if(root == NULL) return 0;

   convert(root->left,it);
   root->data = *it;
   it++;
   convert(root->right,it);

}

 void inorder(vector<int>&a,Node *root){

   if(root == NULL) return ;

   inorder(a,root->left);
   a.push_back(root->data);
   inorder(a,root->right);

 }

 void bst(Node* root,vector<int>&a,int &i){

   if(root == NULL) return;

   bst(root->left,a,i);
   root->data = a[i];
   i++;
   bst(root->right,a,i);
  }


Node* binaryTreeToBst(Node* root){

 vector<int>v;
 inorder(v,root);
 sort(a.begin(),a.end());
 int i=0;
 bst(root,a,i)
 return root;
}
