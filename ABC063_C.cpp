#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int sum=0;
  vector<int> sei(n);
  rep(i,n) {
    cin>>sei[i];
    sum += sei[i];
  }
  sort(sei.begin(), sei.end());
  
  int sumjo = 100100;  
  if(sum % 10 == 0) {
    rep(i,n) {
      sumjo = min(sumjo,sum - sei[i]);
      if(sumjo % 10 != 0) {
        sum = sumjo;
        break;
      }
    }
  }
  if(sum % 10 == 0) cout<<0<<endl;
  else cout<<sum<<endl;
}