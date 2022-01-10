#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// �ċA�֐� (N = n, L = l, R = r �̂Ƃ��̖��̓���)
int func(int n, int l, int r) {
    // n = 0 �̂Ƃ��A�����͋�z��̂� (1 ��)
    if(n == 0) return 1;

    // l > r �̂Ƃ��A�����͑��݂��Ȃ�
    if(l > r) return 0;

    // ����ȊO�̂Ƃ�
    int ans = func(n-1,l+1,r) + func(n,l+1,r);
    //cout<<"n:" <<n <<" l:" <<l <<" r:" <<r<<" ans"<<ans<<endl;

    return ans;
}

int main() {
    int n,l,r;
    cin>>n>>l>>r;

    int ans = func(n,l,r);

    cout<<ans<<endl;
	return 0;
}