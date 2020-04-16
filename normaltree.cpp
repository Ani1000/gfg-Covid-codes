#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

struct Node{

   int data;
   Node* right;
   Node* left;
 };

  int cur,nn;

 Node* solve(int pre[],int preLN[]){

 Node* temp = new Node();

    if(cur>= nn)
    return 0;

    if(preLN[cur] == 'L')
    {
        temp->data = pre[cur];
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    temp->data = pre[cur];
    cur++;
    temp->left = solve(pre,preLN);
    cur++;
    temp->right = solve(pre,preLN);
    return temp;
 }

struct Node *constructTree(int n, int pre[], char preLN[])
{
    // Code here
     cur =0;
     nn = n;

   solve(pre,preLN);
}

 int main(){







 }
