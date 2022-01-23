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
  int n,m;
  cin>>n>>m;
  vector<string> s(n);
  set<string> t;
  string x;
  rep(i,n) {
    cin>>x;
    s[i] = x;    
  }
  rep(i,m) {
  	cin>>x;
    t.insert(x);
  }
  rep(i,n) {
  	if(t.count(s[i])) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;    
  }
}