#include <bits/stdc++.h>
using namespace std;
#include <cmath> //”ŠwŠÖ”

int main() {
  double x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  
  double x = (x2-x1)*(x2-x1);
  double y = (y2-y1)*(y2-y1);
  //(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)
  double ans = x + y;
  
  printf("%f\n", sqrt(ans));
}