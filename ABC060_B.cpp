#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  
  string ans="NO";
  for(int i=a; i<=b*a; i+=a) {
    if(i%b == c) ans="YES";
      //cout<<i<<":"<<i%b<<endl;
  }
  cout<<ans<<endl;
}