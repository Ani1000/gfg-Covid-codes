#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,o=0;
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++){
	        cin>>a[i];
	        if(i)
	        a[i]+=a[i-1];
	    }

  for(int i=0;i<n;i++){
   cout<<a[i]<<' ';
  }
 cout<<"\n";
	    sort(a,a+n);
	    for(long long i=0;i<n;)
	    {
	        long long j=i+1;
	        while(j<n&&a[j]==a[i])
	        j++;
	        if(a[i])
	        o+=(j-i-1)*(j-i)/2;
	        else
	        o+=(j-i)*(j-i+1)/2;
	        i=j;
	        //cout<<o<<" ";
	    }
	    cout<<o<<"\n";
	}
	//code
	return 0;
}
