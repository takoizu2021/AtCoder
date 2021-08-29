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
  
  set<pair<string,string>> st;
  pair<string,string> p;
  rep(i,n) {
    cin>>p.first>>p.second;
    st.insert(p);
  }
  int chk=st.size();
  //cout<<chk<<endl;
  string ans="No";
  if(n!=chk) ans="Yes";
  
  cout<<ans<<endl;
}