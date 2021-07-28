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
  
  int ar=1,br=1,cr=1;
  
  if(a<b) ar++; else br++;
  if(b<c) br++; else cr++;
  if(c<a) cr++; else ar++;
  
  cout<<ar<<endl;
  cout<<br<<endl;
  cout<<cr<<endl;
}