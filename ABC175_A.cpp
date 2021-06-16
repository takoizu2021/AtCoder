#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  if(s =="SSS") cout<<0<<endl;
  if(s =="SSR") cout<<1<<endl;
  if(s =="SRS") cout<<1<<endl;
  if(s =="SRR") cout<<2<<endl;
  if(s =="RSS") cout<<1<<endl;
  if(s =="RSR") cout<<1<<endl;
  if(s =="RRS") cout<<2<<endl;
  if(s =="RRR") cout<<3<<endl;
}