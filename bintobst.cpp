#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

struct Node{

   int data;
   Node* right;
   Node* left;
 };

  void ani(Node* root,auto& sets){

   if(root == NULL)
    return ;

   ani(root->left,sets);
   sets.insert(root->data);
   ani(root->right,sets);

  }

  void convertBst(Node *root,auto &it){

   if(root == NULL)
   return;

   convertBst(root->left,it);

   root->data = *it;
     ++it;
    convertBst(root->right,it);
  }

  int main(){

    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(5);
    root->left->left = newNode(10);
    root->left->right = newNode(2);
    root->right->left = newNode(4);
    root->right->right = newNode(6);

    //travese the binary tree
     set<int>sets;
     ani(root,sets);

     //put back the keys in set
     auto it = sets.begin();
     convertbst(root,it);

     //print binarytree
     inorder(root);

     return 0;
  }
