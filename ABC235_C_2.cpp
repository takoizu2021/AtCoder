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
  int n,q;
  cin>>n>>q;
  
  map<int,map<int,int> > a;
  
  rep2(i,1,n+1) {
    int key;
    cin>>key;
    int val = a[key].size() + 1;
    a[key][val] = i;
  }
  
  rep(i,q) {
    int x,k;
    cin>>x>>k;
    if(a.count(x) && a[x].count(k)) cout<<a[x][k]<<endl;
    else cout<<-1<<endl;
  }

}