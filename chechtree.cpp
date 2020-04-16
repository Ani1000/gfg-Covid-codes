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


int check(vector<int>v){

 int flag = 0;

    for(int i=1;i<v.size();i++){
        if(v[i] <= v[i-1]){
        flag = 1;
        break; }
    }

 if(flag == 0) return 1;
 else if(flag == 1) return 0;

 }

bool isBST(Node* root) {
    // Your code here

 vector<int>n(1001);

    isBST(root->left);
    n.push_back(root->data);
    isBST(root->right);

  if(check(n) == 0)
  return false;
  else  return true;

}

int cur=0,nn;

 void binarytree(int pre[],int preln[]){

  Node* temp = new Node();


      if(preln[i] == 'L'){
         temp->data = pre[i];
         temp->right = NULL;
         temp->left = NULL;
         return temp;
      }

     temp->data = pre[i];
     cur++;
     temp->left = binarytree(pre[i],preln[i]);
     cur++;
     temp->right = binarytree(pre[i],preln[i]);
      return temp;

  }


  Node* Insert(Node* node, int data)
{
    if(node == NULL)
    {
        Node *tmp = new Node(data);
        return tmp;
    }

    if(data == node->data )
        return node;

    if(data > node->data)
        node->right = Insert(node->right,data);
    else
        node->left = Insert(node->left,data);


    return node;
}


 void preorder(Node *root){

// Your code here
   if(root == NULL)
   return;
  else {
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right); }

   }


int main() {
	/*Code To Test the logic
	  Creating an example tree
                5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
    int n;
	Node* root = NULL;
	root = Insert(root,1); root = Insert(root,2);
	root = Insert(root,3);


//   root = findmin(root);

 //   cin>>n;
 preorder(root);
  isBST(root);
   //largestnode(root,n);
  binarytree(root);
  // cout<<root->data<<endl;

 return 0;
 }

