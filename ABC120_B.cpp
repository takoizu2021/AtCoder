#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int a,b,k;
  cin>>a>>b>>k;
  
  vector<int> vec(0);
  int ct=0;
  for(int i=1;i<=min(a,b);i++) {
    if(a%i==0 && b%i==0) {
      vec.push_back(1);
      vec[ct] = i;
      ct++;
    }
  }
  cout<<vec[vec.size()-k]<<endl;
}