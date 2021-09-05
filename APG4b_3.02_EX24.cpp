#include <bits/stdc++.h>
using namespace std;

// �ȉ��ɁA24���ԕ\�L�̎��v�\���� Clock ���`����
struct Clock {

// Clock�\���̂̃����o�ϐ�������
    int hour;    //���Ԃ�\�� (0~23�̒l���Ƃ�)
    int minute;  //����\��   (0~59�̒l���Ƃ�)
    int second;  //�b��\��   (0~59�̒l���Ƃ�)

// �����o�֐� set �̒�`������    
//   �֐���: set
//   ����: int h, int m, int s (���ꂼ�ꎞ�A���A�b��\��)
//   �Ԃ�l: �Ȃ�
//   �֐��̐���:
//     ���E���E�b��\��3�̈������󂯎��A
//     ���ꂼ��A�����o�ϐ� hour, minute, second �ɑ������
  void set(int h, int m, int s) {
    hour   = h;
    minute = m;
    second = s;
  }

// �����o�֐� to_str �̒�`������
//   �֐���: to_str
//   ����: �Ȃ�
//   �Ԃ�l: string�^
//   �֐��̎d�l:
//     �����o�ϐ����\�������̕������Ԃ�
//     �����̕�����͎��̃t�H�[�}�b�g
//     "HH:MM:SS"
//     HH�AMM�ASS�͂��ꂼ�ꎞ�ԁA���A�b��2���ŕ\����������
  string to_str() {
    string HH = to_string(hour);
    if(hour < 10) HH = "0" + HH;
    string MM = to_string(minute);
    if(minute < 10) MM = "0" + MM;
    string SS = to_string(second);
    if(second < 10) SS = "0" + SS;
    
    string HHMMSS = HH+":"+MM+":"+SS;
    return HHMMSS;
  }

// �����o�֐� shift �̒�`������
//   �֐���: shift
//   ����: int diff_second
//   �Ԃ�l: �Ȃ�
//   �֐��̎d�l:
//     diff_second �b���������o�ϐ����\��������ύX����(�������A���t�₤�邤�b�͍l���Ȃ�)
//     diff_second �̒l�����̏ꍇ�A������߂�
//     diff_second �̒l�����̏ꍇ�A������i�߂�
//     diff_second �̒l�� -86400 ~ 86400 �͈̔͂���Ƃ肤��
  void shift(int diff_second) {
    int hms = (hour*3600)+(minute*60)+(second);
    hms += diff_second;
    if(hms<0) {
      hms += 86400;
    }
    else if(hms==86400) hms=0;
      hour   = hms/3600;
      hms -= hour*3600;
      minute = hms/60;
      hms -= minute*60;
      second = hms;
  }

};
// -------------------
// ���������͕ύX���Ȃ�
// -------------------

int main() {
  // ���͂��󂯎��
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock�\���̂̃I�u�W�F�N�g��錾
  Clock clock;

  // set�֐����Ăяo���Ď�����ݒ肷��
  clock.set(hour, minute, second);

  // �������o��
  cout << clock.to_str() << endl;

  // ���v��i�߂�(�߂�)
  clock.shift(diff_second);

  // �ύX��̎������o��
  cout << clock.to_str() << endl;
}
