
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

 int height(Node* root){




 }


  int main(){

   Node *root = NULL;

    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

   height(root)?cout<<"yes":cout<<"no";

   return 0;
  }


