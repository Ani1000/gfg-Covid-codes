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


 int sum(Node* root){

   if(root == NULL) return 0;
   else {
     return root->data+sum(root->left)+sum(root->right);
   }

 }

 bool issum(Node* root){

  if(root == NULL ) return true;

  int val = root->data;
  int lh=0,rh=0;

  if(root->left != NULL) lh = sum(root->left);
  if(root->right != NULL) rh = sum(root->right);

  if(root->right == NULL && root->left == NULL) return true;

  bool x = issum(root->left);
  bool y = issum(root->right);

  return ( (lh+rh) == val && x && y);

 }
