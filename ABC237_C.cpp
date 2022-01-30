#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string t = s;
  reverse(t.begin(),t.end());
  int l=0, r=0;
  
  if(s!=t) {
    int n = s.size();
    for(int i=0; i<n; ++i) {
      if(s[i]=='a') ++l;
      else break;
    }
    for(int i=n-1; i>=0; --i) {
      if(s[i]=='a') ++r;
      else break;
    }
    s.erase(n-r,r);
    s.erase(0,l);
    //cout<<s<<endl;  
    t=s;
    reverse(t.begin(),t.end());
  }
  
  cout<<(s==t && l<=r ? "Yes" : "No")<<endl;
}