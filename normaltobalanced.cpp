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


vector<int>v(1000);

void store_nodes(Node* root,vector<int>&nodes){
    if(root == NULL) return ;

   inorder(root->left);
   nodes.push_back(root->data);
   inorder(root->right);

}

 int ani(vector<int>& nodes,int s,int e){

   if(s> e) return NULL;

   int mid = (s+e)/2;

   Node* root = nodes[mid];

    root->left = ani(nodes,s,mid-1);
    root->right = ani(nodes,mid+1,e);

   return root;
}


Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<Node*>nodes;
	store_nodes(root,nodes);
	int n = nodes.size();

   root =  ani(v,0,v.size()-1);

 return root;
}

int main(){

 int t,x,z;
   cin>>t;
   Node * root = NULL;

   while(t--){

      int n;
      cin>>n;

      for(int i=0;i<n;i++){
       cin>>x;
       root = IInsert(root,x); }

         buildBalancedTree(root);
   }




   return 0;
}
