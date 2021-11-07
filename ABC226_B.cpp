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
  vector <string> L(n);
  
  string a;
  getline(cin, a);
  
  rep(i,n) getline(cin, L[i]); 
  sort(L.begin(),L.end());
  
  //rep(i,n) cout<<L[i]<<endl;
  
  int ct=0;
  rep2(i,1,n) if(L[i-1] == L[i]) ++ct;
  
  cout<<n-ct<<endl;  
}