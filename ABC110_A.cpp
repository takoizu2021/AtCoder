#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string abc= "aaa";
  cin>>abc[0]>>abc[1]>>abc[2];
  
  sort(abc.begin(),abc.end());
  reverse(abc.begin(),abc.end());
  
  string x = abc.substr(0,2);
  int y = abc[2] - '0';
  int ans = stoi(x) + y;
  
  cout<<ans<<endl;  
}