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
  
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  
  int sum=0;
  rep(i,n) {
    while(a[i]>=0) {
      if(a[i]%2==0 || a[i]%3==2) {
        a[i]--;
        sum++;
      }
      else break;
    }
  }
  
  cout<<sum<<endl;
}