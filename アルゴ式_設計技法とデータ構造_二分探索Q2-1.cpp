#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const long long inf = 10000000000000; //10^13

double f(double x) {
    return x*(x*(x+1)+2)+3;
}

int main() {
    double n;
    cin>>n;

    // �񕪒T�� (X�� 0 �ȏ� 100 �ȉ��ł��邱�Ƃ��킩���Ă���)
    double left=0, right=100;
    while(right-left > 1e-4) { // ���x���\���ǂ��Ȃ�܂�
        // left �� right �� ���_ mid ���Ƃ�
        double mid = (left + right) / 2;        
        if(f(mid) < n) { // ���� f(mid) < N �Ȃ�Γ����� mid ���傫�� right �ȉ�
            left = mid; // �͈͂����߂�
        }
        else { // �����łȂ���Γ����� left �ȏ� mid �ȉ�
            right = mid; // �͈͂����߂�
        }
        //cout<<left<<" : "<<right<<" : "<<mid<<endl;
    }


  // ������ left �ȏ� right �ȉ��ł��邱�Ƃ��킩���Ă���B
  // ���x�͏\���Ȃ̂ŁA�����ł� left �̒l���o�͂���B
    double ans = left;
    cout << ans << endl;
	return 0;
}