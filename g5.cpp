#include <bits/stdc++.h>
using namespace std;

 struct Node{
   int data;
   Node* next;
 };

 Node* mergesort(Node* head)
 {

  for(Node* i = head;i!= NULL;i = i->next){
    for(int j = i->next;j!= NULL;j=j->next){

       if(i->data > j->data){
           int temp  = i->data;
           i->data = j->data;
           j->data = temp;
       }

    }
  }


  return head;

 }
