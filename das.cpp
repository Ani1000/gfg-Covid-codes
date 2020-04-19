

#include <bits/stdc++.h>
#include <vector>

using namespace std;

/*
int main(){

 int n,ans=0;
  cin>>n;
  pair<int,int>p[1000];

  for(int i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
     }

 sort(p,p+n);

  for(int i=0;i<n;i++)
  {
    int a=0,b=0,c=0,d=0;
    for(int j=0;j<n;i++)
   {
   if(p[i].first == p[j].first){
      if(p[i].second <p[j].second)
       a++;
       if(p[i].second > p[j].second)
          b++; }

   if(p[i].second == p[j].second){
      if(p[i].first <p[j].first)
        c++;
       if(p[i].first > p[j].first)
         d++;  }
     }
        if(a>0 && b>0 && c>0 && d>0)
         ans++;
   }
  cout<<ans<<endl;

  return 0;
}



int main(){

 int n,a,b,c,d;
 int l,r;
 cin>>n;

 vector< pair<int,int> >v;

 for(int i=0;i<n;i++){
        cin>>l>>r;
    v.push_back(make_pair(l,r));
 }

 sort(v.begin(),v.end());
 int ans=0;
  for(int i=0;i<n;i++){
    a=0,b=0,c=0,d=0;
    for(int j=0;j<n;j++){
       if(v[i].second == v[j].second){
         if(v[i].first < v[j].first)
            a++;
         else if(v[i].first > v[j].first)
            b++;
       }
       if(v[i].first == v[j].first){
          if(v[i].second < v[j].second)
            c++;
          else if(v[i].second > v[j].second)
            d++; }
    }
    if(a>0 && b>0 && c>0 && d>0) ans++;
  }

   cout<<ans<<endl;

 return 0;
}

program to find the area of the parellolpied

int ani(){

 int a,b,c;
 cin>>a>>b>>c;
 int x,y,z;

 x = sqrt( (a*c)/b);
 y = sqrt( (a*b)/c);
 z = sqrt( (b*c)/a);

 int area = 4*(x+y+z);

 cout<<area<<endl;

 return 0;
}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

 int main(){

 int n,mini= 1002,pos,pos2;
 cin>>n;
 vector<int>v;
 vector<int>ani;

 for(int i=0,x;i<n;i++){
    cin>>x;
 if(x<mini){
    mini = x;
    pos = i; }
   v.push_back(x);
   ani.push_back(x);
 }
 sort(ani.begin(),ani.end());

 int secmini = ani[1];

 for(int i=0;i<n;i++){
    if(secmini == v[i]) pos2 = i;
 }

 cout<<pos+1<<" "<<pos2+1<<endl;
  return 0;
 }

***********************************************
 int main(){

 string s;
 cin>>s;

 int len = s.length();
 int cnt=0;

 for(int i=0;i<len;i++)
 {
   if(s[i] == s[i+1])
    {
        cnt++;
      if(cnt == 7){
      cout<<"YES"<<endl;
      return 0; }
     }
   else cnt = 1;
 }

  cout<<"NO"<<endl;

 return 0;
 }

int main(){

 int n,sum=0,pos;
 cin>>n;
 int a[7];

 for(int i=0;i<7,i++){
    cin>>a[i];
 }

 while(true){
   int f = 0;
    for(int i=0;i<n;i++){
        if(sum < n){
            sum += a[i]; }
        else{
           f = 1;
           pos = i;
            break; }
    }
    if(f == 1){
    cout<<pos<<endl;
    break; }
 }
 return 0;
}
**********************
int petrandbooks(){

 int n,sum=0,pos;
 cin>>n;
 int a[10000];

 for(int i=1;i<=7;i++)
    cin>>a[i];

 while(true){
   int f = 0;

    for(int i=1;i<=7;i++){
        if(sum < n){
            sum += a[i]; }

         if(sum == n || sum > n){
           f = 1;
            pos = i;
           break; }
    }
    if(f == 1){
    cout<<pos<<endl;
    break; }
 }

 return 0;
}

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

  ll n;
 cin>>n;
  ll a[n],b[n];

    for(ll i=0;i<n;i++){
    cin>>a[i];
    b[i] = a[i]; }

    sort(b,b+n);

    cout<<b[0]<<endl;

    if(b[0] != b[1]){
    for(ll i=0;i<n;i++)
     {
       if(a[i] == b[0])
        cout<<i+1<<endl;
        break;
     }
    }else
       cout<<"Still Rozdil";

 return 0;


 int doubt(){
  ll n,t,five=0,is_zero=0;

   cin>>n;

    for(ll i=0;i<n;i++){
      cin>>t;
     if(t == 0) ++is_zero;
     else if(t == 5) ++five;
     }

   if(is_zero == 0)
    cout<<"-1"<<endl;
   else if(five < 9)
    cout<<"0"<<endl;
   else{
      five -= five%9;
      for(int i=0;i<five;i++)
        cout<<5;
      for(int i=0;i<is_zero;i++)
        cout<<"0";
   }


}

int main(){

 string a,b;
 cin>>a>>b;

  if(a.length()!= b.length()){
   cout<<"NO"<<endl;
    return 0; }
 else {
  stack<char>ani;
  for(int i=0;i<a.length();i++){
     ani.push(a[i]); }

   int cnt=0;
  while(!ani.empty()){
    if(b[cnt] == ani.top()){
       ani.pop();
       cnt++; }
     else {
            cout<<"NO"<<endl;
            return 0;
            }
    }
    cout<<"YES"<<endl;
 }
 return 0;
}
 int main(){

 ll i,j,k;
 string s;
 cin>>s;
 bool flag = true;

 for(int i=0;i<s.length();){

     if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4') i+= 3;
     else if(s[i] == '1' && s[i+1] == '4') i += 2;
      else if(s[i] == '1') i++;
     else {
      flag = false;
      break; }
   }

   if(flag == false) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;

  return 0;
 }

int n,t,searchs;
int sum1=0,sum2=0;
cin>>n;

int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];

cin>>t;
while(t--){
  int pos1=0,pos2=0;

  cin>>searchs;
  for(int i=0;i<n;i++){
    if(a[i] == searchs){
      pos1 = i;
      break; }
  }

  for(int j=n-1;j>=0;j--){
     pos2++;
    if(a[j] == searchs){
       break; }
  }

    sum1 += pos1+1;
    sum2 += pos2;
 }

  cout<<sum1<<" "<<sum2<<endl;

return 0;
}

int main(){
int n,x,index[100001];
  cin>>n;

 for(int i=1;i<=n;i++){
    cin>>x;
    index[x] =  i;
 }
  int m,b;
  cin>>m;
   long long Vasya = 0,Petya=0;

  while(m--){
   cin>>b;
   Vasya += index[b];
   Petya += (n+1 - index[b]);
  }

  cout<<Vasya<<" "<<Petya<<endl;
 return 0;
}

 int chatroom(){

  int cnt=0,j=0;
  string s;
  string s2 = "hello";

   cin>>s;

  for(int i=0;i<s.length();i++){

    if(s[i] == s2[j]){
        j++;
        cnt++; }
     if(cnt == 5) break;
  }

  if(cnt == 5) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

 return 0;
 }

int DZycheesboard(){

 int n,m;
 cin>>n>>m;
  char a[n][m];

 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     cin>>a[i][j];
     if(a[i][j] == '.'){
     if( (i+j)%2 == 0 ) a[i][j] = 'B';
      else a[i][j] = 'W'; }
   }
 }

 for(int i=0;i<n;i++)
 {
   for(int j=0;j<m;j++){
    cout<<a[i][j]; }
   cout<<"\n";
  }

 return 0;
}

 int effectiveapproach(){
  int n,x,index[1000];

  cin>>n;

  for(int i=1;i<=n;i++){
    cin>>x;
    index[x] = i;
  }

  int m,b;
  cin>>m;

  long long Vasya=0,Petya=0;

  while(m--){
    cin>>b;
    Vasya += index[b];
    Peyta += (n-index[b]+1);
  }

  cout<<Vasya<<" "<<Petya<<endl;

  return 0;
 }

*/
/* int fibbo(int a){

  if(a == 0)
    return 0;
  else

 }

 int main(){

  int n;
  cin>>n;

   if(a>1)
  fibbo(n);
  else cout<<a<<endl;

  return 0;
 }

 int main(){
  int n,x;
  cin>>n;
 vector<int>a;

  for(int i=0;i<n;i++){
     cin>>x;
   a.push_back(x); }

   sort(a.begin(),a.end());
   int cnt=1,maxi=-1;

   for(int i=1;i<n;i++)
    {
    if(a[i] == a[i-1]){
         cnt++;
        if(cnt > maxi) maxi = cnt; }
    else cnt=1;
   }

   if(maxi <= (n+1)/2)
    cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

  return 0;
 }

int two_potatoes()
{
   int y,k,n,x=0;
   int cnt=0,x;
   int stop;
   cin>>y>>k>>n;
s
   start = (y/k+1) * k;
  vector<int>v;
 if(n%k == 0)
    stop = n;
 else stop = n/k * k;
    cout<<"start "<<start<<"  "<<" stop "<<stop<<endl;
 int b = start;
 while(b<=stop){
   cnt++;
     int a=0;
    x = 1;
    if(b%k == 0){
         a = b-y;
        v.push_back(a); }
    b +=k;
 }
 if(x == 0) cout<<"-1"<<endl;

else for(int i=0;i<cnt;i++) cout<<v[i]<<" ";
    return 0;
}

int optimised_two_potatoes(){

 long int y,k,n;
 long int cnt=0,start,stop,x=0;
 cin>>y>>k>>n;

  start = ( (y/k +1)*k);
 vector<long int>v;

 if(n%k == 0) stop = n;
 else stop = (n/k)*k;

 int b=start;
//cout<<"start"<<start<<" "<<stop<<endl;

 while(b<=stop )
    {
   cnt++; long int ans=0;
   if(b%k == 0){
   x = 1;
   ans = b-y;
   cout<<ans<<" "; }
    //v.push_back(ans); }
    b += k;
     }

 if(x == 0) cout<<"-1"<<endl;

 return 0;
}

int chatroom(){

  string a,s2 = "hello";
    int cnt2=0;

    cin>>a;

  for(int i=0;i<a.length();i++)
 {
    if(a[i] == s2[cnt2++]){
          cnt2++;
          if(cnt2 == 5) break;
          }

    if(cnt2 == 5) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
  }

 return 0;
}

int main(){

 string a,b;
 cin>>a>>b;
 int x = a.length(),y = b.length(),len[x] = {0},cnt=0;

 if(x!= y) cout<<"NO"<<endl;
 else if(x == y){

 for(int i=0;i<x;i++){ if(a[i] != b[i]){
     if(cnt <2) len[cnt] = i;
        cnt++; } }

    cout<<"the value present in the length"<<endl;
    for(int i=0;i<x;i++) cout<<len[i]<<" ";

  if(cnt == 2){
    if(a[len[0]] == b[len[1]]&& a[len[1]] == b[len[0]])
        cout<<"YES"<<endl;
    else cout<<"No"<<endl;
 }
 else cout<<"No"<<endl;
 }

return 0;
}

int boysandgirls(){
    int n,m;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

  cin>>n>>m;
   if(n>m ){
        int ans = m;
        for(int i=0;i<ans;i++){
            cout<<"BG"; }
     for(int i=0;i<n-m;i++) cout<<"B";
 }else if(n<m){
     int ans = n;
        for(int i=0;i<ans;i++){
            cout<<"GB"; }
     for(int i=0;i<m-n;i++) cout<<"G";
   }
   else { for(int i=0;i<n;i++)
        cout<<"GB"; }

 return 0;
}

int main(){

 int n; cin>>n;
 string s; cin>>s;

set<char>ani;
map<char,int>mp;
 set<char>::iterator it;
 map<char,int>::iterator it1;

 for(int i=0;i<s.length();i++){
   ani.insert(s[i]);
   mp[s[i]]++;
 }
   int f =0;
 for(int i=0;i<mp.size();i++){
    if(mp[i] % n != 0){
            f = 1;
        cout<<"-1"<<endl;
        break; }
 }

 if(f == 0){
    for(int i=0;i<n;i++){
       for(it=ani.begin();it!= ani.end();it++)
         cout<<*it; }
   }

   s.clear();
   mp.clear();

 return 0;
}

*/

int airport(){

 int n,m,x;
 cin>>m>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x); }

sort(v.begin(),v.end());
 int mini=0,num = v[0],k=0;

 for(int i=0;i<n;i++){
   mini += num;
   num -= 1;
    if(num == 0) num = v[++k]; }

 sort(v.begin(),v.end(),greater<int>());
 int maxi=0,i=0;

 while(n--){
   maxi += v[i];
  v[0] -= 1;
   for(int i=1;i<m;i++)
    {
       if(v[i] <= v[i-1]){ break; }
       swap(v[i],v[i-1]);
   }
 }

 cout<<mini<<" "<<maxi<<endl;
 return 0;
}


 int main(){




 return 0;
}




