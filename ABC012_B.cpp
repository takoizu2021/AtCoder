#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int h=n/3600;
  n = n%3600;
  int m=n/60;
  n = n%60;
  int s=n;
  
  if(h<10) cout<<"0";
  cout<<h<<":";
  if(m<10) cout<<"0";
  cout<<m<<":";
  if(s<10) cout<<"0";
  cout<<s<<endl;  
  
  /*
  string hh=to_string(h);
  if(hh<"10") hh="0"+hh;
  string mm=to_string(m);
  if(mm<"10") mm="0"+mm;
  string ss=to_string(s);
  if(ss<"10") ss="0"+ss;  
  string ans=hh+":"+mm+":"+ss;   
  cout<<ans<<endl;
  */
}