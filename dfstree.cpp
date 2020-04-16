#include<bits/stdc++.h>
#include<vector>
#include<stack>

using namespace std;

 void ani(Node* root,Node* root1){

  if(root == NULL && root1 == NULL) return true;
  else
  if(root == NULL || root1 == NULL ) return false;

   queue<Node*>q;
   queue<Node*>ani;

   q.push(root);
   q1.push(root1);

   int n1 = q.size();
   int n2 = q1.size();


     while(1){

      if(n1 != n2) return false;
      if(n1 == 0) break;

    vector<int>level,level2;

    while(n1--){
     Node* node1 = q.front();
     q1.pop();
     if(node->left)
      q1.push(node->left).
      if(node->right) q2.push(node->right);

      ani2.push(node->data);

      }

      while(n2--){
     Node*ani = q1.front();
      q2.pop();
      if(node2->left) q2.push(node->left);
      if(node->right) q2.push(node->right);

      ani.push(node2->data);
      }

   }


 }
