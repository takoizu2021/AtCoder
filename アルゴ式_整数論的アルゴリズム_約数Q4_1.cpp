#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
    // ����
    long long n;
    cin>>n;

    long long ans=1+n;
    for(long long a=1; a*a<=n; ++a) {
        if(n%a!=0) continue;
        ans = min(ans,a+n/a);
    }
    cout<<ans<<endl;
	return 0;
}