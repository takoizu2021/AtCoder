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
  int n;
  cin>>n;
  vector<int> q1(n+1);
  vector<int> q2(n+1);
  rep2(i,1,n+1) {
    int q,p;
    cin>>q>>p;
    if(q==1) q1[i] += p;
    else q2[i] += p;
    q1[i] += q1[i-1];
    q2[i] += q2[i-1];
  }
  
  int Q;
  cin>>Q;
  rep(i,Q) {
    int l,r;
    cin>>l>>r;
    int sum1=0,sum2=0;
    sum1 = q1[r]-q1[l-1];
    sum2 = q2[r]-q2[l-1];
    cout<<sum1<<" "<<sum2<<endl;
  }
  
}