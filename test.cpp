#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],c[60]={0};

	    for(int i=0;i<n;i++)
	   {
	    cin>>a[i];
	    c[a[i]-1]++;
	   }

	   for(int i=0;i<=n;i++) cout<<c[i]<<" ";

	   cout<<"% "<<endl;

	   while(n)
	   {
	   int g=c[0],j=0;
	   for(int i=1;i<60;i++)
	    if(c[i]>g){
	       g=c[i];
	       j=i;
	     }
	   n-=c[j];

	  while(c[j]){
	    cout<<j+1<<" ";
	   c[j]--; }

	   }

	   cout<<"\n";
	}
	//code
	return 0;
}
