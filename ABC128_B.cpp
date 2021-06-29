#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<tuple<string,int,int> > s(n);
  rep(i,n) {
    cin>>get<0>(s[i])>>get<1>(s[i]);
    get<1>(s[i]) *= -1; 
    get<2>(s[i]) = i+1;
  }
  
  sort(s.begin(), s.end());
  
  rep(i,n) cout<<get<2>(s[i])<<endl;
}