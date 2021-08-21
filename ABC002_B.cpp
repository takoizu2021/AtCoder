#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string w;
  cin>>w;
  
  int n=w.size();
  rep(i,n) if(!(w[i]=='a'|| w[i]=='i'|| w[i]=='u'|| w[i]=='e'|| w[i]=='o')) cout<<w[i];
  cout<<endl;  
}