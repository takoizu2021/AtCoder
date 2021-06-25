#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  int mou=1, tot_a=0;
  while(mou < b) {
    mou += a-1;
    tot_a++;
  }
  cout<<tot_a<<endl;
  
}