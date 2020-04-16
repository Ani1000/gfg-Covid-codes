
#include <math.h>

using namespace std;

int prints(int a[],int b[],int n,int m){

int c[100001] = {0},p=0;

  for(int i=0;i<n;i++)
        c[a[i]]++;

 int flag = 0;

  for(int j=0;j<m;j++){
      ++c[b[j]];
      if(c[b[j]] != 2){
          flag = 1;
         break;  }
  }

  if(flag == 1)
  cout<<"No"<<endl;
  else cout<<"Yes"<<endl;

 return 0;
 }


int main(){

  int t,n,m;
  cin>>t;

  while(t--){

  cin>>n>>m;
  int a[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
         cin>>A[i][j];
      }
    }

     prints(n,m,a);

  }

 return 0;
}

void prints(int m,int n,int a[r][c]){

   int i=0,k=0,l=0;

   while(k<m && l<n){

    for(int i=l;i<n;i++)
       cout<<a[k][i]<<' ';
     k++;

    for (i = k; i < m; ++i)
        cout << a[i][n - 1] << " ";
        n--;

    if(k<m){
      for(int i=n-1;i>=0;i--)
         cout<<a[m-1][]<<" ";
    }
    m--;

    if(l<n){
     for(int i=m-1;i>=k;--i)
       cout<<a[i][l]<<" "; }
    l++;


   }

}

/*m = 3,n=3;
  00 01 02
  10 11 12
  20 21 22
*/

int main()
{
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };

    spiralPrint(R, C, a);
    return 0;
}
