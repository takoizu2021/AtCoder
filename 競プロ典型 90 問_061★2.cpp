#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int q;
  cin>>q;
  deque<int> de;
  rep(i,q) {
    int t,x;
    cin>>t>>x;
    if(t==1) de.push_front(x);
    if(t==2) de.push_back(x);
    if(t==3) cout<<de.at(x-1)<<endl;
  }
}