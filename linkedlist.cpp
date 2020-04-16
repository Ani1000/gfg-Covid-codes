#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 struct Node{

   int data;
   Node*next = NULL;

    Node(int x){
      data = x;
      next = NULL;
    }

  };

  struct Node* head ;


  Node* Insert(Node* head,int newdata){

   Node *temp = new Node(newdata);
   temp->next = head;
   head = temp;

   return head;
}


   void printme(Node* head){

    Node* temp =  head;
    while(temp->next!= NULL )
    {
      cout<<temp->data<<" ";
      temp = temp->next;
      }
   }

   /*
   int animesh(Node* head){

  Node* temp = head;

  while(temp!=NULL){
      temp->data = temp->data+1;
      temp = temp->next;
  }

  printme(head);

return 0;
   }

    */

    int deleteswithouthead(Node* newdata){

    Node * ptr = node->next;

    while(ptr->next!= NULL){
        node->data = ptr->data;
         node =  node->next;
         ptr  = ptr->next;
      }

    node->data = ptr->data;
    node->next = NULL;

    return ;
    }

 int main(){

  int t;
  cin>>t;

   while(t--){

    int n,tmp;
   struct Node* head = NULL;
   cin>>n;

 for(int i=0;i<n;i++){
       cin>>tmp;
       head = Insert(head,tmp);
     }

     printme(head);

     Nodee *newnode = new node(data);
     deleteswithouthead(data);

   //  animesh(head);
 }

     return 0;
   }
