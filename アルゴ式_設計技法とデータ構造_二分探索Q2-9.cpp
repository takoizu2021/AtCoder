#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

//f(x)�����߂�֐�
int f (double x, vector<double> L) { //x�͒���
	double ans = 0;
	for(double i: L) {
		ans += (int)(i/x);
	}
	return ans;
}

int main() {
	int n,k;
	cin>>n>>k;

	vector<double> L(n);
	rep(i,n) cin>>L[i];

	double left=0, right=2e5;
	while(right-left > 1e-6) {
		double mid = (left+right) / 2;
		if(f(mid,L) >= k) { // ���� f(mid,L)>=K �Ȃ�Γ����� mid �ȏ� right �ȉ�
			left=mid;				
		}
		else { // �����łȂ���Γ����� left �ȏ� mid ����
			right=mid;
		}
	}

  // ������ left �ȏ� right �ȉ��ł��邱�Ƃ��킩���Ă���B
  // ���x�͏\���Ȃ̂ŁA�����ł� left �̒l���o�͂���B*/
	double ans = left;
	cout<<setprecision(10)<<left<<endl;
	return 0;
}