#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

int x,y;


 void inorder(Node* root,int &cnt,int n){

  if(root == NULL) return ;

  inorder(root-left,cnt,n);
  if(cnt == n/2) x = root->data;
  if(cnt == (n/2)+1) y = root->data;
  inorder(root->right,cnt,n);
  }

  int sizes(Node* root){

   if(root == NULL) return ;

   return 1+sizes(root->left)+sizes(root->right);
  }

 float findMedian(struct Node *root,int n){

  int cnt=0;

  n = sizes(root);
  inorder(root,cnt,n);
  if(n%2== 0) return (x+y)/2;
  else
  return y;

}

 int main(){




  return 0;

  }
