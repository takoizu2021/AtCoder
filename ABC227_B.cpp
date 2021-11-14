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
  int n;
  cin>>n;
  
  set<int> st;
  for(int a=1; a<=200; ++a) {
    for(int b=1; b<=200; ++b) {
      int s = 3*a+4*a*b+3*b;
      st.insert(s);
    }
  } 
  int ans=0;  
  rep(i,n) {
    int s;
    cin>>s;
    if(st.count(s) == 0) ++ans;
  }
  cout<<ans<<endl;
}