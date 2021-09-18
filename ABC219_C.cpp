#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
using ll = long long;
//for (int tmp = 0; tmp < (1 << ビット数); tmp++) {
//bitset<ビット数> s(tmp);
//  // (ビット列sに対する処理)
//}

int main() {
  string x;
  int n;
  cin>>x>>n;
  
  map<string,string> s;
  string a;  
  rep(i,n) {
    cin>>a;
    string key=a;
    int sa=a.size();
    for(int j=0; j<sa; j++) {
      for(int k=0; k<26; k++) {
        if(a[j]==x[k]) key[j] = 'a'+k;
      }
    }
    s[key] = a;
  }
  
  for(auto p : s) {
    auto k = p.first;
    auto v = p.second;
    cout<<v<<endl;
  }
}