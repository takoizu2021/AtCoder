#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  vector<int> n(5);
  cin>>n[0];
  cin>>n[1];
  cin>>n[2];
  cin>>n[3];
  cin>>n[4]; 
  
  set<int> s;
  rep(i,5) {
    rep2(j,i+1,5) {
      rep2(k,j+1,5) {
        s.insert(n[i]+n[j]+n[k]);
      }
    }
  }
  s.erase(*rbegin(s));
  s.erase(*rbegin(s));
  
  cout<< *rbegin(s) << endl;  
}