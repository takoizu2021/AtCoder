#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  ll n;
  cin>>n;
  
  string s="";  
  bool chk=false;
  for(int i=0; n>0; i++) {
    if(n%2==0) {
      n /=2;
      s +="B";
    }
    else {
      n--;
      s +="A";
    }
  }
  reverse(s.begin(),s.end());
  //if(s.size() > 120) cout<<"bad"<<endl;
  cout<<s<<endl;  
}