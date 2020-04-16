#include <bits/stdc++.h>
using namespace std;

// function to find the total
// number of distinct years
/*
int distinct_year(string str)
{
    string str2 = "";

    unordered_set<string> uniqueDates;

    for (int i = 0; i < str.length(); i++) {

        if (isdigit(str[i])) {
       // cout<<str[i]<<endl;
            str2.push_back(str[i]);
        }

        cout<<str2<<" ?";
        // if we found - then clear the str2
        if (str[i] == '-') {
            str2.clear();
        }

        cout<<str2<<" >"<<endl;

        // if length of str2 becomes 4
        // then store it in a set
        if (str2.length() == 4) {
            uniqueDates.insert(str2);
            str2.clear();
        }
    }

    // return the size of set
    return uniqueDates.size();
}

*/

// Driver code

 void get(Node* root,int hd,map<int,vector<int>v >&m){

  if(root == NULL) return;

   m[hd].push_back(root->data);

   get(root->left,hd-1,m);
    get(root->right,hd+1,m);

 }

 void printvertical(Node* root){

  map<int,vector<int>v >m;
   int hd=0;
  get(root,hd,m);

  map<int,vector<int> >::iterator it;

   for(it = m.begin();it!= m.end();it++){
            cout<<it->second[0]<<" ";
   }

 }


 void printBoundary(Node *root)
{
    if(root == NULL)
     return;

     queue<Node*>q;

     q.push(root);

     while(!q.empty()){

      Node* ani = q.front();
      int n = q.size();

       while(n--){
         vector<int>v;
         v.push_back(ani->data);
       }


     }

}



void leaves(Node* root,int lvl,set<int>&s){

 if(root  == NULL) return;

   if(root->left == NULL && root->right == NULL){
      s.insert(lvl);
    }

   leaves(root->left);
   leaves(root->right);
}

 int odd(Node* root){

  if(root == NULL) return ;

   queue<Node*>a;

   a.push(root);

   while(!a.empty()){

    Node* curr = a.front();
    int n = a.size();

    while(n--){
    if(lvl%2 == 0)
       even_lvl  += curr->data;
    else odd_lvl += curr->data;

      if(curr->left) a.push(curr->left);
      if(curr->right) a.push(curr->right);
   }

   }

   return ;
 }


int main()
{


    return 0;
}
