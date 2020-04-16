#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


Node * inOrderSuccessor(Node *root, Node *x)
{
    //Your code here
    Node* suc = NULL;

    while(root){

        if(root->data > x->data){
            suc = root;
            root = root->left;
        }
        else if(root->data < x->data)
            root = root->right;

        else {
            if(root->right){
                suc = root->right;

                while(suc->left) suc = suc->left;
              }
            break;
         }
    }

    if(root == NULL) return NULL;

    return suc;
}


https://practice.geeksforgeeks.org/viewSol.php?subId=114466566cde13618a1b1bdcfd24e502&pid=700627&user=Aravind^Pandit
