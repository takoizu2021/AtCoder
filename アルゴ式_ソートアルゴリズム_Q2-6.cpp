#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    // ���ꂼ��̐��k�̓��[�����W�v����
    vector<int> nums(n,0);
    for(auto val:a) ++nums[val];

    // ���k�ԍ���\���z������
    vector<int> students(n);
    rep(i,n) students[i] = i;

    // ���[�����������ɕ��ёւ���
    // ���[�����������Ƃ���͐��k�ԍ������������ɂȂ�悤�Ɉ���\�[�g���g��
    auto cmp = [&](int x, int y) -> bool {
        return nums[x] > nums[y];
    };
    stable_sort(students.begin(), students.end(), cmp);

    for(auto i : students) {
        cout<<i<<" "<<nums[i]<<endl;
    }
	return 0;
}