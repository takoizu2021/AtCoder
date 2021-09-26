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
  int k;
  string a,b;
  cin>>k>>a>>b;
  
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int ae=a.size(), be=b.size();
  ll ak=a[0]-'0', bk=b[0]-'0';
  
  for(int i=1; i<ae; ++i) {
      int c=1;
      for(int j=1; j<=i; ++j) {
      	c *=k;     	
  	  }      
  	  ak += (a[i]-'0')*c;
  }
  
  for(int i=1; i<be; ++i) {
      int c=1;
      for(int j=1; j<=i; ++j) {
      	c *=k;
  	  }      
  	  bk += (b[i]-'0')*c;
  }
  
  ll ans=ak*bk;
    
  cout<< ans <<endl;
}