#include <bits/stdc++.h>
#include <math.h>

using namespace std;

  int t,n,m;
//  int a[n][m];

void prints(int m,int n,int a[][]){

   int i=0,k=0,l=0;

   while(k<m && l<n){

    for(int i=l;i<n;i++)
       cout<<a[k][i]<<' ';
     k++;

    for (i = k; i < m; ++i)
        cout<<a[i][n - 1] << " ";
        n--;

    if(k<m){
      for(int i=n-1;i>=k;i--)
         cout<<a[n][i]<<" ";
    }
    n--;

    if(l<n){
     for(int i=m-1;i>=k;--i)
       cout<<a[i][n-1]<<" "; }
    l++;


   }

return ;
}


int main(){

  //int t,n,m;
  cin>>t;

  while(t--){

  cin>>n>>m;
  int a[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
         cin>>a[i][j];
      }
    }

     prints(n,m,a);

  }

 return 0;
}
