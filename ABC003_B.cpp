#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s,t;
  cin>>s>>t;
  
  int n=s.size();
  string ans="You can win";
  rep(i,n) {
    if(s[i]!=t[i]) {
      if(s[i]!='@'&&t[i]!='@') ans="You will lose";
      else if(s[i]=='@') {
        if(!(t[i]=='a'|| t[i]=='t'|| t[i]=='c'|| t[i]=='o'|| 
             t[i]=='d'|| t[i]=='e'|| t[i]=='r'))  ans="You will lose";
      }
      else if(t[i]=='@') {
        if(!(s[i]=='a'|| s[i]=='t'|| s[i]=='c'|| s[i]=='o'|| 
             s[i]=='d'|| s[i]=='e'|| s[i]=='r'))  ans="You will lose";
      }
    }
  }
  cout<<ans<<endl;
}