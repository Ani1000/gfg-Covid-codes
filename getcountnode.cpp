
#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 int c=0;
  int order(Node *root,int l,int r){
 if(root == NULL)
  return 0;

   if(l<= root->data && h>= root->data){
    c++;
   }

   order(root->left,l,h);
   order(root->right,l,h);

  return c;
  }


 int getcountofnode(Node* root,int l,int r){

  c = 0;

 order(root,l,h);
 return c;
 }
