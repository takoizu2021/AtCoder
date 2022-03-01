#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

struct student {
    string name;
    ll math;
    ll eng;
};

int main() {
    int n;
    cin>>n;
    vector<student> s(n);
    rep(i,n) {
        cin>>s[i].name>>s[i].math>>s[i].eng;
    }

    // �u���w�̓_�������� -> ���v�肪�Ⴂ�v�̏��ɕ��ёւ���
    // �����Ƃ���̏��ʂ�ۂ悤�ɁA����\�[�g���g��
    auto cmp = [&] (student x, student y) -> bool {
        if(x.math > y.math)
          return true;
        else if(x.math == y.math &&
              x.math + x.eng < y.math + x.eng)
          return true;
        else
          return false;
    };
    stable_sort (s.begin(), s.end(), cmp);

    for(student val : s) {
        cout << val.name << " " << val.math << " " << val.eng << endl;
    }

	return 0;
}