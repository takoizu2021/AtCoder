#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> w(n);
  int sum=0;
  rep(i,n) {
    cin>>w[i];
    sum += w[i];
  }
  int sum1=0; int sum2=2;
  int ans=sum;
  rep2(i,1,n) {
    rep(j,i) sum1 += w[j];
    sum2 = sum-sum1;
    ans = min(ans,max(sum1,sum2)-min(sum1,sum2));
    sum1=0;
  }
  cout<<ans<<endl;  
}