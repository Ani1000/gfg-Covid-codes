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

  int getnode(Node* root,int l,int r){

    int cnt=0;

    Node *temp = root;

    while(root->data < l && root->data > r){

    }

  }


  Node* inserts(Node *root,int data){

   if(root == NULL){
    Node *tmp = new Node(data);
    return tmp; }

    if(data == root->data)
    return root;
    else if(data < root->data)
    root->left = inserts(root->left,data);
    else
    root->right = inserts(root->right,data);

return root;
  }


  Node* Insert(Node* node, int data)
{
    if(node == NULL){
        Node *tmp = new Node(data);
        return tmp; }

    if(data == node->data ) return node;

    if(data > node->data) node->right = Insert(node->right,data);
    else node->left = Insert(node->left,data);

    return node;
}


void kth(Node *root, int k)
{
    if(root == NULL) return 0;

   stack<int>in;
    inorder(in,root);

  sort(in.rbegin(),in.rend());
 cin>>k;
 cout<<in[k-1]<<endl;

}

void topView(Node *root)
{
    //Your code here
    Node* temp = root;

       if(root == NULL) return ;
  queue<int>Q;
  queue<int>A;

//left tree
  while(root->left!= NULL){
    Q.push(root->data);
    root = root->left;
  }
 Q.push(root->data);

//right tree
  while(temp->right!= NULL){
    A.push(root->data);
    temp = temp->right;
  }
 A.push(root->data);

//display left tree
 while(!Q.empty()){
		cout<<Q.front()<<"  ";
		Q.pop(); }

 //display right tree
		while(!A.empty()){
		cout<<A.front()<<"  ";
		A.pop(); }

}



  void order(Node *root){

  if(root == NULL) return ;

  else {
    cout<<root->data<<" ";

    order(root->left);
    order(root->right); }

  }

int main() {
	/*Code To Test the logic
	  Creating an example tree
                5
			   / \
			  3   10
			 / \   \			1   4   11
    */
    int n;
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); //root = Insert(root,4);
	//root = Insert(root,1); root = Insert(root,11);

//   root = findmin(root);

 //   cin>>n;
  //order(root);
   //largestnode(root,n);
  // cout<<root->data<<endl;

  kth(root);

 return 0;
 }
