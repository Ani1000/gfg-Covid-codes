#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stack>
#include<map>

 using namespace std;


/*

int square_matrixmultilcation(int A[],int N)
{
    int sum=0;
    int cum=0;

    for(int i=0; i < N;i++)
        cum=cum+A[i];


    for(int i=0; i < N;i++)
        sum+=i*A[i];


    int p=sum;

    int nex;
    for(int i=1;i < N;i++)
    {
        nex=sum-(cum-A[i-1])+A[i-1]*(N-1);

     cout<<sum<<" "<<cum<<" "<<A[i-1]<<" "<<N-1<<" "<<nex<<endl;

        sum=nex;
        if(p < sum) p=sum;

    }
    return p;

}

int max_summain(){

 int t;
 cin>>t;

 while(t--){

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<square_matrixmultilcation(a,n)<<endl;
 }

 return 0;
}





  void medianofmatrix(){

  int t;
  cin>>t;

  while(t--){

   int r,c,x,ani;
   cin>>r>>c;
  int a[r][c];

  int v[r*c],das=0;

     for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
           cin>>a[i][j];
           v[das++] = a[i][j];
            }
      }

  sort(v,v+das);
   ani = (r*c)-1;

  // cout<<ani<<endl;

   cout<<v[ani/2]<<endl;
     }

 return ;
  }



  void multiply(int A[][100], int B[][100], int C[][100], int N)
{
      for(int i=0;i < N;i++)
      {
          for(int j=0;j < N;j++)
          {
              C[i][j]=0;
              for(int k=0;k < N;k++)
              {
                  C[i][j]=C[i][j]+A[i][k]*B[k][j];
              }
          }
      }
}

 void finds(){

  int t;
  cin>>t;

  while(t--){

    int n,data,pos,flag=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
     cin>>a[i]; }

  cin>>data;

     for(int i=0;i<n;i++){
        if(data  == a[i]){
         flag = 1;
          pos = i; }
     }

     if(flag == 0) cout<<"-1"<<endl;
     else cout<<pos<<endl;

  }

  return ;
 }

  int wronghora(){

  int t,flag=0;
  string a,b;
  cin>>t;

  while(t--){

    cin>>a>>b;
    int ani=a.length(),das=b.length();
    char char_array[ani+1],char_array2[das+1];

   //strcpy(char_array,a.c_str());
   //strcpy(char_array2,b.c_str() );

   sort(a.begin(),b.begin());

   for(int i=0;i<das;i++)
   {
       if(binary_search(a.begin(),a.end(),b[i]))
        flag = 0;
        else{
         flag = 1;
          break; }
    }

 if(flag == 1) cout<<"not found"<<endl;
 else cout<<"found"<<endl;

  }

  return 0 ;
  }


    int hora(){

      int t,flag=0;
      string a,b;
      cin>>t;

      while(t--){

      cin>>a>>b;

      for(int i=0;i<a.length();i++){

        for(int j=0;j<b.length();j++){

         if(a[i+j] == b[j])
          continue;
         else
          break;
        }
         if(j == b.length()){
          flag = 1;
          break; }
       }

       if(flag == 1) cout<<"found"<<endl;
       else
       cout<<"not found"<<endl;
      }

      return ;
     }


   int prints(){

    int i=0,k=0,l=0;

    while(k<m && l<n){


       for(int i= l;i<n;i++){
        cout<<a[l][i]<<" ";
       }
       l++;

       for(int j=l;j<m;j++){
       cout<<a[j][n-1]<<" ";
       }
        n--;

       for(int k=n;k>=0;k--){
         cout<<a[n][k]<<" ";
       }

      for(int )

    }


    return;
     }




     int subset(string v){

  int maxi=0,das=0;

  while(das<v.size()){

   int n = v[i].size();

  for(int len=1;i<=n;i++){
   for(int i=0;i<=n-len;i++){

     int j = i+len-1, ani=1;

     for(int k=i;k<=j;k++){
       ani *= v[i];
       if(ani >maxi ) maxi = ani; }

   }
  }

  }

  cout<<maxi<<endl;

return ;
  }









  void maxiproduct(){

   int t,n;
   cin>>t;

   while(t--){

   cin>>n;
    vector<int>v(n);

    for(int x:v)
    cin>>x;

     subset(v);
   }


   return;
  }



  int add(){

   int t;
   cin>>t;

   while(t--){



   }


  }

  // spiral matrix

   int spiral(){

    int t,r,c;
    cin>>t;
    while(t--){

     int r,c;
     cin>>r>>c;

     for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
        cin>>a[i][j]; }
     }

    int k=0,l=0,i;
    int last_col=c-1,last_row=r-1;


    while(k< last_row && l<= last_col){

    for(int i=l;i<n-1;i++){
        cout<<a[k][i]<<" ";
    }

    k++;

    for(int i=k;i<=last_row;i++){
      cout<<a[i][last_col]<<" ";
    }

    last_col--;

    if(k<=last_col){
      for(int i=last_col;i>=l;i--){
         cout<<a[last_col][i]<<" "
      }

    }

    if(l<=last_col){
      for(int i=last_row;i>=k;i--){
        cout<<a[i][l]<<" "; }
        l++;
    }

     cout<<"\n";

    }

    }

    return ;
   }


 struct node{

   int data;
   node *next = NULL;

 };

 */


 /*
 **************************************************

    int node(){

      int a=0,b=0,sum,cnt = 1,cnt2=1,reversenumber=0;

      struct Node *temp = new node();

       Node *temp = first,*temp2 = second;

      while(temp!= NULL){
      a += temp->data * cnt;
         cnt = cnt*10;
         temp = temp->next; }

       while(temp2!= NULL){
        b += temp2->data * cnt2;
        cnt2 = cnt2*10;
        temp2 = temp2->next; }

        sum = a+b;

        string answer = to_string(sum);

        reverse(answer.begin(),answer-end());

        cout<<answer<<endl;



      return ;
    }

********************************************************************************************************************************************


    int circular(node* head){

    if(head == NULL)
    return true;

    node* temp = head->next;

    while(temp!= NULL && temp!= head){
      temp = temp->next;
    }

    if(head == temp) return true;
    return false;
    }



 int triple()
 {


 }





  int stacks(){

   stack <int> s;
   int top;


    for(int i = 0;i < 5; i++){
        s.push( i ) ; }

     while(!s.empty()){

        cout<<s.top()<<" ";
        s.pop();
         //top = top-1;
      }


     return 0;
  }

  */


int sum(int a[],int b[],int sum,int n,int m){

 // cout<<"n "<<n<<m<<endl;
  int flag = 0;

  sort(a,a+n);
  sort(b,b+m);

  for(int i=0;i<n-1;i++){
    for(int j=0;j<m;j++){

  if(a[i]+b[j] == sum && flag == 0){
       flag = 1;
       cout<<a[i]<<" "<<b[j];
       }
       else if(a[i]+b[j] == sum && flag == 1)
       cout<<", "<<a[i]<<" "<<b[j];
    }
  }

  if(flag == 0) cout<<"-1"<<endl;


cout<<"\n";

   return 0;
 }

  void animesh(){

  	int t,x,y,z;
	cin>>t;
 for(int i=0;i<t;i++){
    cin>>x>>y>>z;

    int a[x],b[y];

    for(int i=0;i<x;i++)
        cin>>a[i];

     for(int i=0;i<y;i++)
        cin>>b[i];

     sum(a,b,z,x,y);
   }

 }

  int das(){

   	int t;
		cin>>t;
	while(t--)
	{
	    int n,p=1,q=1;
	    cin>>n;
	    int a[n];

	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);

	    int c[1000001];

	    for(int i=0;i<n;i++)
	       c[a[i]]++;

        for(int i=0;i<n;i++){

           if(c[i]>0 && p == 0){
            x = i;
            p = 0; }
           else if(c[i] == 0 && q){
             y = i;
             q = 0; }
           }
     cout<<y<<" "<<x<<endl;
        }

 return 0;
  }


  void print24(string str)
{
    // Get hours
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);

    // If time is in "AM"
    if (str[8] == 'A')
    {
        if (hh == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << str[i];

                cout<<"\n";
        }
        else
        {
            for (int i=0; i <= 7; i++)
                cout << str[i];
                cout<<"\n";
        }
    }

    // If time is in "PM"
    else
    {
        if (hh == 12){
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << str[i];
            cout<<"\n"; }
        else{
            hh = hh + 12;
            cout << hh;
            for (int i=2; i <= 7; i++)
                cout << str[i];
            cout<<"\n";  }
    }
}


 void stacksort(){

   stack<int>ani;

   while(!s.empty()){
    int x = s.top();
    s.pop();

    while(!ani.empty() && ani.top()>x){
     s.push(ani.top());
      ani.pop();
    }

    ani.push(x);
    }

    while(ani.empty()){
     cout<<ani.top()<<" ";
     ani.pop();
    }

    return ;
   }





 int main(){


 // max_summain();

 //median();

  //substring();

  //multiply();

 // finds();

 // 1.  https://practice.geeksforgeeks.org/problems/pattern-searching/0/
 // amazon();

  //spiral();

 // maxiproduct();
  //subset();

 //add();

 //spiral();

 //node();
 // circular();
 // triple();

 // stacks();
 // stacks();

  //animesh();

 // das();

 //ani();

 //decimal();

  sortthestack();


  return 0;
 }
