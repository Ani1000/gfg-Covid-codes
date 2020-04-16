#include <bits/stdc++.h>
#include <vector>
#include<string>

using namespace std;

/*
int sale(){

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   int n,m,sum = 0;;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);

   for(int i=0;i<m;i++)
   {
     if(a[i] <= 0){
        a[i] = a[i]*-1;
        sum += a[i]; }
   }

 cout<<sum<<endl;

return 0;
}

 int solve(){

  string a,b;
  cin>>a>>b;

  for(int i=0;i<s.length();i++){
    if(isupper(s[i]) )
    cnt++;
    else if(islower(s[i]))
    ani++;
  }

  if(cnt== ani)
 }

int main()
{
  int y;
    cin >> y;
    while (true)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}
int main(){

 int n;
 cin>>n;

 int a[1000];
 for(int i=0;i<12;i++){
   cin>>a[i];
 }

 if(n == 0){
  cout<<"0"<<endl;
  return 0; }

  sort(a,a+12,greater<>() );
  int cnt=0,sum=0,ani=1;

  for(int i=0;i<12;i++)
  {
  //cout<<a[i]<<" ";
    if(sum < n){
    sum += a[i];
     cnt++; }

    if(sum >= n){
     cout<<cnt<<endl;
     ani = 0;
     break; }
  }

 if(ani == 1) cout<<"-1"<<endl;

 return 0;
}

int stringtask(){

string s;
cin>>s;

 for(int i=0;i<s.length();i++)
 {
   if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
     s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    continue;
   else if( isupper(s[i]) ){
        s[i] = s[i]+32;
        cout<<"."<<s[i];
      }
      else cout<<"."<<s[i];

  }

return 0;
}

int main(){

 int n;
 cin>>n;

 string s;
 cin>>s;

 set<char>ani;
 set<char>::iterator it;

 for(int i=0;i<s.length();i++){
   ani.insert(s[i]);
 }



 if(ani.size() % n == 0){
    for(int i=0;i<n;i++)
    {
       for(it=ani.begin();it!= ani.end();it++)
         cout<<*it;
    }
 }
 else cout<<"-1"<<endl;

 return 0;
}

*/

int main(){

int t,a,b;
int sum =0,maxi = -1;
cin>>t;

 while(t--){

  cin>>a>>b;
  sum -= a;
  sum += b;

  if(sum > maxi) maxi = sum;
 }

   cout<<maxi<<endl;
return 0;
}
