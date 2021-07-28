#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  
  vector<int> abc(3);
  abc[0]=a; abc[1]=b; abc[2]=c;
  sort(abc.begin(),abc.end());
  int ans=abc[1];
  
  cout<<ans<<endl;
}