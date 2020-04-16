
#include <bits/stdc++.h>

 using namespace std;


  int printunion(long int a[],int n,int k){

  //cout<<"inside fund"<<endl;
    int d,ani=0;
 int i=0;
    long int c[n] = {0};
//cout<<"enter the k value "<<endl;
    cin>>k;
    d = n-k;

  for(int i=0;i<n;i++){

     if(d<n){
     c[d] = a[i];
      d++;
     }
     else
     c[ani++] = a[i]; }

    for(long int i=0;i<n;i++){
     cout<<c[i]<<"  ";
    }
    cout<<"\n";

    return 0;
  }

  int main(){

 int t,n,k;

 cin>>t;
 while(t--){

 cin>>n>>k;
 int a[n];

 for(int i=0;i<n;i++){
   cin>>a[i]; }

 printunion(a,n,k);
 }

  return 0;
   }
