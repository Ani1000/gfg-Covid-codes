#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 struct Node{

  int data;
  Node *left,Node* right;

  Node(int data){
    this->data = data;
    this->left =
  }

 }


 bool isSumTree(Node *root){



  }

 BstNode Bst{

  int data;
  struct Bst *left;
  struct Bst *right;
 };


  int s(Node *r){
   if(r)
     return r->data+s(r_left)+s(r->right);

    return 0;
   }

 bool issumtree(Node* root){

  if(root && (root->left || root->right)
  return (s(root) == 2*root=>data) && issumtree(root->left)&& issumtree(root->right);
    else
    return true;

  }

 int  main(){

 int t;
 cin>>t;

  while(t--){



  }




  return 0;

  }
