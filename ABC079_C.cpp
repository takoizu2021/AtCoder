#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int a = s[0] - '0'; int b = s[1] - '0'; 
  int c = s[2] - '0'; int d = s[3] - '0';
  
  if     (a + b + c + d == 7) cout<<a<<'+'<<b<<'+'<<c<<'+'<<d<<"=7"<<endl;
  else if(a + b + c - d == 7) cout<<a<<'+'<<b<<'+'<<c<<'-'<<d<<"=7"<<endl;
  else if(a + b - c + d == 7) cout<<a<<'+'<<b<<'-'<<c<<'+'<<d<<"=7"<<endl;
  else if(a + b - c - d == 7) cout<<a<<'+'<<b<<'-'<<c<<'-'<<d<<"=7"<<endl;
  else if(a - b + c + d == 7) cout<<a<<'-'<<b<<'+'<<c<<'+'<<d<<"=7"<<endl;
  else if(a - b + c - d == 7) cout<<a<<'-'<<b<<'+'<<c<<'-'<<d<<"=7"<<endl;
  else if(a - b - c + d == 7) cout<<a<<'-'<<b<<'-'<<c<<'+'<<d<<"=7"<<endl;
  else if(a - b - c - d == 7) cout<<a<<'-'<<b<<'-'<<c<<'-'<<d<<"=7"<<endl;  
}