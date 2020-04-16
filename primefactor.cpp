#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 int prime(int n){

  while(n%2 == 0){
  cout<<"2"<<" ";
     n = n/2;
  }

  if(n%2 == 1){

  for(int i=3;i*i<n;i = i+2){

       while(n%i == 0){
          cout<<i<<" ";
           n = n/i;
          }
  }


  return 0;
  }

return 0;
 }

 int main(){

  int t,n;

  cin>>t;

  while(t--){

    cin>>n;

  prime(n);
  }

return 0;
  }

