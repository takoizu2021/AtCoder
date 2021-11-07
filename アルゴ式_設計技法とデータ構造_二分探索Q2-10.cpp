#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

ll f (ll n, ll k) {
    ll count = 0;   
    rep(i,n) {
        count += min(n,k/(i+1));
    }
    return count;
}


int main() {
	long long n,x;
	cin>>n>>x;

    // �񕪒T��
    ll left=1, right=n*n;    
    while(left!=right) { // �������܂�܂�
        // left �� right �� ���_ mid ���Ƃ�
        ll mid = (left+right)/2;
        if(f(n,mid) >= x) { // ���� f(mid) >= X �Ȃ�Γ����� left �ȏ� mid �ȉ�
            right = mid; // �͈͂����߂�
        }
        else {// �����łȂ���Γ����� mid+1 �ȏ� right �ȉ�
            left = mid+1; // �͈͂����߂�
        }
    }

  // ������ left �ȏ� right �ȉ��ł��邱�Ƃ��킩���Ă���B
  // left = right �Ȃ̂ŁA������ left �ł���B
    ll ans = left;
	cout << ans << endl;
	return 0;
}