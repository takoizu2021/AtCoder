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
  vector<int> star(n+1);
  int a;
  rep(i,(n-1)*2) {
    cin>>a;
    ++star[a];
  }
  sort(star.rbegin(),star.rend());
  bool ans=true;
  rep(i,n) {
    if(i==0 && star[i]!=n-1) ans = false;
    if(i!=0 && star[i]!=1) ans = false;
  }  
  cout<<(ans ? "Yes" : "No")<<endl;  
}