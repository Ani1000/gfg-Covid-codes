#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


 struct Node{

   int data;
   Node* left;
   Node* right;

   Node(int x){
     data = x;
     left = NULL;
     right = NULL; }

 };


 void preorder(Node *root){

// Your code here
   if(root == NULL)
   return;
  else {
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right); }

   }


  Node* Insert(Node* root,int x){

   cout<<"root data"<<root->data<<" ";

   if(root == NULL){
    Node* temp = new Node(x);
      return temp; }

    if(x == root->data)
    return root;

   if(x < root->data)
   root = Insert(root->left,x);

   else if(x > root->data)
   root = Insert(root->right,x);


  }

 int main(){

 Node * root = NULL;
   int t,n,x;
   cin>>t;

   while(t--){

    cin>>n;

    for(int i=0;i<n;i++){
       cin>>x;
       root = Insert(root,x);
        }

 // print(root);
 preorder(root);

   }

   return 0;
 }
