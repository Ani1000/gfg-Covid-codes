 #include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>
#include <queue>
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


 int a[1001];
 int cnt=0;

int check(int a[],int cnt){

 int flag = 0;
    for(int i=0;i<cnt-1;i++){
        if(a[i] >= a[i+1]){
        flag = 1;
        break; }
    }
 if(flag == 0) return 1;
 else if(flag == 1) return 0;
 }

 void inorder(Node* root){

  if(root == NULL) return ;

   inorder(root->left);
   a[cnt++] = root->data;
   inorder(root->right);
 }

 int sizes(Node* root){

 if(root == NULL) return 0;

  retunr

 }

bool isBST(Node* root){
    // Your code here
  if(root == NULL) return true;

   inorder(root);

  if(check(a,cnt) == 0) return false;
  else return true;

}

