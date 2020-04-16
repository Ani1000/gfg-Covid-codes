
#include <bits/stdc++.h>
using namespace std;


 strut Node{
   int data;
   Node* next;
 };


  Node *reverses(Node* head){

   Node* prev = NULL;
   Node* curr = NULL;
   Node* next;

   while(curr!= NULL){
     next = curr->next;
     curr->next = prev;
     prev = curr;
     curr = next;
    }

  return prev;
  }


 int main(){



 return 0;

 }
