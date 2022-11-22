#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
const int mod=998244353;
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  string s,t;
  cin>>s>>t;
  
  int k;
  if(s[0]<=t[0]) {
    k=t[0]-s[0];
  }
  else {
    k='z'-s[0]+t[0]-'a'+1;
  }
  for(int i=0; i<(int)s.size(); ++i) {
    if(s[i]+k > 'z') {
      s[i]='a'-1+(k-('z'-s[i]));
    }
    else s[i]=s[i]+k;
  }
  if(s==t) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  
  //cout<<k<<" "<<s<<" "<<t;
}