
#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


 struct Node{

   int data;
   Node* right;
   Node* left;

   Node(int x){
    data = x;
    right = NULL;
    left = NULL; }

 };


 /*
  Node* inserts(Node *root,int data){

   if(root == NULL){
    Node *tmp = new Node(data);
    return tmp; }

    if(data == root->data)
    return node;
    else
    if(data < root->data)
    root->left = insert(root->left,data);
    else
    root->right = insert(root->right->data);

return root;
  }
*/

  Node* IInsert(Node* node, int data)
{
    if(node == NULL){
        Node *tmp = new Node(data);
        return tmp;}

    if(data == node->data )
        return node;

    if(data > node->data) node->right = IInsert(node->right,data);
    else node->left = IInsert(node->left,data);

    return node;
}

 void inorder(Node* root,int &cnt){

    if(root == NULL)
   return ;

  if(root->left ==NULL && root->right == NULL)
     cnt++;

    inorder(root->left,cnt);
    cout<<root->data;
    inorder(root->right,cnt);
 }

 int animesh(Node* root){

   if(root == NULL)
   return 0;

   Node *temp = root->right;
   root->right = root->left;
   root->left = temp;
   return root;
 }




    int printsum(Node* root,stack<int>st,int sum){

      if(root == NULL) return

    static int sum = 0;
    sum  += root->data;

    st.push(root->data);

       if(sum == k)
       print(st);

     printsum(root->left,st,sum);
     printsum(root->right,st,sum);

      s.pop();
   }

   void treepreorder(int preorder[],char prechar){

    static cur = 0 ;

     Node* temp = new Node(preorder[cur]);

    if(cur >= nn)
      return 0;

    if(prechar[cur] == 'L'){
     temp->left = NULL;
     temp->right = NULL;
      return temp;
    }

   cur++;
   temp->left = treepreorder(preorder,prechar);
   cur++;
   temp->right = treepreorder(preorder,prechar);
   return  temp;

   }


 void preordertree(int preorder[],char prechar[]){

  int cur=0,nn=n;

  treepreorder(preorder,prechar);

 }


int main(){

   int t,data;
   cin>>t;

   while(t--){

    for(int i=0;i<n;i++){
    cin>>data;
   root = Insert(root,data);
    }

     inorder(root);
    preordertree(preorder,char prechar);




   }

   return 0;
 }
