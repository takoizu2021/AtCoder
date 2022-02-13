#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//最大公約数 gcd(A,B)

int main() {
  int h,w;
  cin>>h>>w;
  
  int ans;
  //hまたはwが1の場合、2*2のケースがないので、連続して点灯しても適切になる。コーナーケース
  if(h==1||w==1) ans=h*w;
  //h+1,w+1は奇数だった場合に縦横で2づつ枠をとった場合のあまり1を拾えるように偶数に直している。
  //偶数だった場合は2づつ枠をとってもあまりが拾えないので影響がない。
  else ans = ((h+1)/2)*((w+1)/2); 
  cout<<ans<<endl;
}