#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int a;
  int sum=0, ct=n;
  rep(i,n) {
    cin>>a;
    if(a==0) ct--;
    sum+=a;
  }  
  int ans=sum/ct;
  if(sum%ct!=0)ans++;
  
  cout<<ans<<endl;
}