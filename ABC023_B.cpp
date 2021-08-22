#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  string s;
  cin>>n>>s;
  
  int k=0, ct=1;
  string acs="b";
  while(acs.size() < n) {        
    if(ct==1) {
      acs = "a" + acs + "c";      
      ct++; k++;
      continue;
    }
    else if(ct==2) {
      acs = "c" + acs + "a";
      ct++; k++;
    }
    else if(ct==3) {
      acs = "b" + acs + "b";
      ct++; k++;
    }
    
    if(ct>3) ct=1;
  }
  
  int ans=-1;
  if(acs==s) ans=k;
  
  cout<<ans<<endl;  
}