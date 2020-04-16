#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

  Node *lca(Node *root, int a,int b) {

    if(root == NULL) return root;


     if(a < root->data && b<root->data)
      root = lca(root->left,a,b);
      if(a > root->data && b > root->data)
       root =  lca(root->right,a,b);

      return root;

    }


 void inorder(Node* root){

   if(root == NULL) return ;

   inorder(root->left);
   s.insert(root->data);
   inorder(root->right);

  }



  void merge(Node* root1,Node* root2){

   multiset<int>s;

   inorder(root1);
   inorder(root2);
  multiset<int>::iterator it = s.begin();

  for(int i=0;i<s.end();i++){
    cout<<*it<<" ";
  }

  cout<<"\n";

return 0;
  }


int cur,nn;

 Node* solve(int pre,char preln){

  Node *temp = new Node(pre[cur]);

    if(preln[i] == 'L')


 }



struct Node *construct(int n,int pre[],char preln[]){

 cur = 0;
 nn = n;

 solve(pre,preln);

}













