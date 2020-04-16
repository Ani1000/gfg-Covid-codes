#include<bits/stdc++.h>
 using namespace std;


/*
#include <bits/stdc++.h>
#include <vector>
#include<string>

using namespace std;

 int solve(){

  float n,x,sum=0;
  double res;
  cin>>n;

  for(int i=0;i<n;i++){
     cin>>x;
     sum += x/100;
  }

  res = sum/n;
  res = res*100;

  cout<<res<<endl;

  return 0;
}

int animesh(){

 int n,cnt=0;
 int maxi = -1,mini = 1000;
 cin>>n;
 vector<int>v(n);

 for(int i=0,x;i<n;i++){
  cin>>x;
   v.push_back(x); }

  for(int i=0;i<n;i++){

     if(v[i] > maxi) cnt++;
     else if(v[i] < mini)


  }

  return 0;
}

int main()
{

 /*
  // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
   //  #endif

  int n,find;

 cin>>n>>find;

  for(int i=n+1;i>0;i++)
  {
    int count=0,flag=0;
      if(i<=find){

      for(int j=1;j<=i;j++)
        {
         if(i%j == 0)
          count++;  }

     if(count == 2 && find == i){
         cout<<"YES"<<endl;
         break; }
      else if(count == 2 && find != i){
          cout<<"NO"<<endl;
          flag = 1;
          break; }

      }

     else if(flag == 0){
      cout<<"NO"<<endl;
        break;  }
  }



 //solve();

 animesh();

  return 0;
}
 int main(){

 int a;
 cin>>a;

     if(a == 2)
    cout<<"ted"<<endl;
    else if(a == 1 || a> 2)
    cout<<"barney"<<endl;

     return 0;
 }


 important Q dubstep

 int main(){

  string a;
  int flag = 1;
  cin>>a;


  for(int i=0;i<a.length();i++){
    if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B'){
     i += 2;
       if(!flag){ cout<<" "; }
       continue;
    } else{
      flag = 0;
     cout<<a[i]; }
  }
  return 0;
 }

  int football(){
    
    string s;
    cin>>s;

    int len = s.length();
    int cnt=1;

    for(int i=0;i<len;i++)
    {
     
       if(s[i] == s[i+1])
       {
         cnt++;
         if(cnt == 7){
            cout<<"YES"<<endl;
            retunn 0; }
       }
        else  cnt = 1;
    }

    cout<<"NO"<<endl;
   
   return 0;
  }
int main(){
 int n;
 cin>>n;
 string a;
  cin>>a;
  set<char>ani;
  set<char>::iterator it;

 for(int i=0;i<s.length();i++)
   ani.insert(s[i]);
 

 int cnt[ani.size()];
while(true){
  it = s.begin(); 
 for(int i=0;i<s.length();i++){
        if(*it == s[i])
          cnt[]
 }
 if(ani.size() % n == 0)
 {
    for(int i=0;i<n;i++)
    {
       for(it=ani.begin();it!= ani.end();it++)
         cout<<*it;
    }
 }
 else cout<<"-1"<<endl;
 return 0;
}

 int main(){
 int mini=100000,n,m;
  cin>>n>>m;
   int a[m];
  for(int i=0;i<m;i++){
    cin>>a[i];
  }
  sort(a,a+m);
 for(int i=n;i<=m;i++){
  mini = min(mini,abs(a[i-1]-a[i-n]) );
 }
 cout<<mini<<endl;
  return 0;
 }

  bool check(int no){
    int ani = no;
      while(ani){
        int rem =  ani%10;
        if(rem == 3)
          return false;
        ani = ani/10;
      }
    return true;
  }
 int main(){
 int t,n,cnt;
 cin>>t;
  while(t--){
    cnt =0 ;
   cin>>n;
      for(int i=0;i<n;i++){
        if(check(i)) cnt++;
      }
    cout<<cnt<<endl;
  }
  return 0;
 }

Element that appears once where every element occurs twice
 int main(){

   int t,n;
   cin>>t;

    while(t--){
        cin>>n;
        int a[n];

       for(int i=0;i<n;i++){
        cin>>a[i];
         xorr ^= a[i];
        }

    cout<<xorr<<endl;}
    
  return 0;
 }
  sum of no using k primes only
 int main(){
  int t,n,k;
   cin>>t;
   while(t--)
   {
    v.clear();
      cin>>n>>k;
       vector<int>ani;
     for(int i=0;i<n;i++)
     {  
      for(int j=1;j<=n;j++){
          if(i%j == 0)
            cnt++;
            continue; }
         if(cnt == 2) ani.push_back(i);
      }   
   }
  return 0;
 }

 program to check if no is perfect root or not 

 int fun(int a){
  int x = a,y=1;
   while(x>y){
      x = (x+y)/2;
      y = a/x;
   }
  return x;
 }
 int main(){
 int a;
 cin>>a;

   while(a--){
    int b;
    cin>>b;
    int c = fun(b);
    cout<<(c*c == b)<<endl;
   } 

  return 0;
 }

 right angle triangle or not
 int main(){

 int t,a,b,c;
 vector<int>v(3);
  
 while(t--){
   v.clear();
  cin>>a>>b>>c;
   v.push_back(a);
   v.push_back(b);
   v.push_back(c);

  sort(v.begin(),v.end());

   if(v[2]*v[2] == v[0]*v[0]+v[1]*v[1] )
    cout<<"Yes"<<endl;
  else  cout<<"No"<<endl;

 }

 return 0;
 }

*/

 int main(){

  int t,a,b,c;
  cin>>t;

   while(t--){
      cin>>a>>b>>c;
      
   
   }

  return 0;
 }







