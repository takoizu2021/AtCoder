#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  ll a,b;
  cin>>a>>b;
  
  int k = (a+b)/2;
  
  if(abs(a-k) == abs(b-k)) cout<<k<<endl;
  else cout<<"IMPOSSIBLE"<<endl;
}