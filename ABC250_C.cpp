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
//最大公約数 gcd(A,B)

int main() {
  int n,q;
  cin>>n>>q;
  
  vector<int> x(q);
  rep(i,q) cin>>x[i];
  
  vector<int> val(n+1), pos(n+1);
  for(int i=1; i<=n; ++i) {
    val[i]=i;
    pos[i]=i;
  }
  
  for(int i=0; i<q; ++i) {
    /*
    cout<<"val:";
    for(int j=1; j<=n; ++j) cout<<val[j]<<" ";
    cout<<endl;
    
    cout<<"pos:";
    for(int j=1; j<=n; ++j) cout<<pos[j]<<" ";
    cout<<endl;
    */
    int p0 = pos[x[i]]; //x[i]の位置のposの値
    int p1 = p0; ////x[i]の位置+1のposの値
    if(p0!=n) p1++;
    else p1--;
    int v0 = val[p0]; //x[i]の位置のposの値のvalの値
    int v1 = val[p1]; //x[i]の位置+1のposの値のvalの値
    //cout<<"p0:"<<p0<<" "<<"p1:"<<p1<<" "<<"v0:"<<v0<<" "<<"v1:"<<v1<<" "<<endl<<endl;;
    swap(val[p0],val[p1]);
    swap(pos[v0],pos[v1]);
  }
  
  for(int i=1; i<=n; ++i) cout<<val[i]<<" ";
  cout<<endl;
}