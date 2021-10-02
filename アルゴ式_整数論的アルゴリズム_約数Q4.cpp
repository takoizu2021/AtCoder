#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const long long inf = 10000000000000; //10^13

// N �̖񐔂����ׂċ��߂�֐�
vector<long long> calc_divisors(long long &n) {
    // ������\���W��
    vector<long long> res;

    // �e���� i �� N �̖񐔂��ǂ����𒲂ׂ�
    for(long long i=1; i*i<=n; ++i) {
        // i �� N �̖񐔂łȂ��ꍇ�̓X�L�b�v
        if(n%i!=0) continue;

        // i �͖񐔂ł���
        res.push_back(i);

        // N �� i ���񐔂ł��� (�d���ɒ���)
        if(n/i != i) res.push_back(n/i);        
        
    }
    // �񐔂����������ɕ��ёւ��ďo��
    sort(res.begin(), res.end());

    return res;
}

int main() {
    // ����
    long long n;
    cin>>n;

    // �񐔂̌�
    vector<long long> divs = calc_divisors(n);

	long long ans=inf, len=divs.size();
	for (long long a=0; a<len; ++a) {
			long long b=n/divs[a];
			ans = min(ans,divs[a]+b);
	}

    cout<< ans <<endl;
	return 0;
}