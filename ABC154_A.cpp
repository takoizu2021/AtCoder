#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  string s,t; int a,b; string u;
  cin>>s>>t>>a>>b>>u;
  
  if(s == u) a--;
  else b--;
  cout<<a<<" "<<b<<endl;
}