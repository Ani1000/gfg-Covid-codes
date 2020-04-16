#include <bits/stdc++.h>
#include <vector>

using namespace std;

/* int animesh(string s,int s){

  int a[26] = {0};

  for(int i=0;i<n;i++){
     int x = s[i]-'a';
      a[x++]; }

   int maxi = 0;
   for(int i=0;i<26;i++){
     if(a[i]>maxi)
      maxi = a[i];
   }
   cout<<maxi<<endl;

   return 0;
 }

 void check(string str,int n){

  for(int len = 1;len<=n;len++){
  for(int i=0;i<=n-len;i++){

     int j = i+len-1;

    for(int k = i;k<=j;k++){
        cout<<str[k];
    }

    cout<<endl;
   }
  }

  return ;

 }
  */

 int longs(string s,int n){

  int cnt = 0;

  sort(s.begin(),s.end());

  cout<<s<<endl;

  for(int i=0;i<n;i++){
   if(s[i] == s[i+1])
   cnt++;
  }

  cout<<cnt<<endl;

  return 0;
 }

 int maps(){

  int t,n;

  cin>>t;

  while(t--){

    map<string,int>m;
    cin>>n;

    for(int i=0;i<n;i++){
     cin>>s;

     map.insert()

    }



  }

 return 0;
 }

 int main(){

  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
   string s;
   cin>>s;

   longs(s,n);

   //largest();

   maps();


  }

  return 0;
 }




















































 int largest()
  {
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

	  // 00 01 02 03
     //  10 11
     //  20    22
   //    30       33


	    for(int i=1;i<m+1;i++)
	     for(int j=1;j<m+1;j++)
	    {
	        if(s1[i-1]==s1[j-1]&&i!=j)
	        a[i][j]=1+a[i-1][j-1];
	        else
	        a[i][j]=a[i-1][j]>a[i][j-1]?a[i-1][j]:a[i][j-1];
	    }
	     cout<<a[m][m]<<"\n";
	}

	cout<<"the matrix is "<<endl;

	for(int i=0;i<m+1;i++){
	 for(int j=0;j<n+1;j++){
	  cout<<a[i][j]<<" ";
	 }
	 cout<<"\n";
	 }

  cout<<"done"<<endl;

	//code
	return 0;
}























