#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> p(n);
  rep(i,n) cin>> p[i];
  
  sort(p.begin(),p.end());
  p[n-1] /= 2;
  
  int tot=0;
  rep(i,n) tot += p[i];
  
  cout<<tot<<endl;
}