#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int c0=0,c1=0,c2=0,c3=0;
  string in;
  rep(i,n) {
    cin>>in;
    if     (in == "AC") c0++;
    else if(in == "WA") c1++;
    else if(in == "TLE") c2++;
    else if(in == "RE") c3++;
  }
  cout<<"AC x "<<c0<<endl;
  cout<<"WA x "<<c1<<endl;
  cout<<"TLE x "<<c2<<endl;
  cout<<"RE x "<<c3<<endl;
}