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
  char s;
  set<char> st;
  cin>>s;
  st.insert(s);
  cin>>s;
  st.insert(s);
  cin>>s;
  st.insert(s);
  if(st.size() == 3) cout<<6<<endl;
  else if(st.size() == 2) cout<<3<<endl;
  else cout<<1<<endl;
}