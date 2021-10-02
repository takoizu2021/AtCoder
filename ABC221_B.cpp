#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  string s,t;
  cin>>s>>t;
  
  bool chk=true;
  int ct=0, len=s.size();
  for(int i=0; i<len && s!=t; ++i) {
    if(s[i]!=t[i]) {
      ++ct;
      if(ct==1 && !(s[i]==t[i+1] && s[i+1]==t[i]) ) chk=false;      
    }
  }
  cout<<(ct<=2 && chk ? "Yes":"No")<<endl;
}