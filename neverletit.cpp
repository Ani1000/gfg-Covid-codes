
#include <bits/stdc++.h>
#include <vector>

using namespace std;

 int main(){


	int t;
	cin>>t;
	while(t--)
	{
	    int m;
	    string s1;
	    cin>>m>>s1;
	    int a[m+1][m+1];

	    for(int i=0;i<m+1;i++)
	    a[0][i]=0;

	    for(int i=0;i<m+1;i++)
	    a[i][0]=0;

	    for(int i=1;i<m+1;i++)
	     for(int j=1;j<m+1;j++)
	    {
	        if(s1[i-1]==s1[j-1]&&i!=j)
	        a[i][j]=1+a[i-1][j-1];
	        else
	        a[i][j]=a[i-1][j]>a[i][j-1]?a[i-1][j]:a[i][j-1];
	    }

	     cout<<a[m][m]<<"\n";



	     cout<<" the matrix is"<<endl;

	for(int i=0;i<m;i++){
	  for(int j=0;j<m;j++){
	   cout<<a[i][j]<<" ";
	  }
	  cout<<"\n";
	}
	cout<<"done"<<endl;

	}



	//code
	return 0;
}











void prints(int a[],int b[],int n,int m){

   int bani = sizeof(b)/sizeof(b[0]);
   int flag = 1;


   for(int i=0;i<bani;i++)
   {
      if(binary_search(a,a+n,b[i])) flag = 1;
      else{
      flag = 0;
        break; }
   }

   if(flag == 0) cout<<"No"<<endl;
   else
   cout<<"Yes"<<endl;

 return ;
 }












