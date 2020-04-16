#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 struct Node{

   int data;
   struct node* next;

   Node(int x){
    data = x;
    next = NULL;
   }

 };


void push(node** head_ref,int data){

  Node* temp = new Node(data);

  temp->next = head;
  head = temp;

  return ;
 }

  void isEmpty(struct Node* head){

  if(head == NULL) return 1;
  return 0;
  }

  void insertAtbottom(Node* head,int data){

   if(s.empty())
    return ;

    int temp  =  s.top();
    s.pop();
    insertAtbottom(head,data);
    push(head,temp);
  }

 int sums(int num){

 long long int sum = 0;

  while(num){

       int rem = num%10;
       sum += rem;
       num = num/10; }

    if(sum <10)
    cout<<sum<<endl;
    else
      sums(sum);

  }

int main() {

     struct node* head = NULL;

     push(&head,1);
     push(&head,2);
     push(&head,3);

     cout<<"The stack is: ";
    while(isEmpty(&head) !=1)
    {
        int x=pop(&head);
        printf("%d ",x);
    }
  cout<<"\n";

    push(&head,1);
    push(&head,2);
    push(&head,3);
    reverseStack(&head);

   cout<<"The new stack is: ";
    while(isEmpty(&head) !=1)
    {
        int x=pop(&head);
       cout<<x<<" ";
    }

	return 0;
}
