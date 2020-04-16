#include<bits/stdc++.h>

 using namespace std;

int main(){

 int n;
 cin>>n;

 int a[1000];
 for(int i=0;i<12;i++){
   cin>>a[i];
 }

   sort(a,a+n,greater<>() );

   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }

   return 0;
   }
