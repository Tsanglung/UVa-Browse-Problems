#include <iostream>
#include<string>
using namespace std;
int main() {
	string Sa, Sb;
	int ASCIISa[26], ASCIISb[26];
	while (getline(cin,Sa)) {
		getline(cin, Sb);
		for (int i = 0; i < 26; i++) {//a~z�r���X�{���ơA��l�ҳ]��0
			ASCIISa[i] = 0;
			ASCIISb[i] = 0;
		}
		for (int i = 0; i < Sa.length(); i++) {//����Sa�r��C�Ӧr��(a~z)�X�{����
			ASCIISa[Sa[i] - 'a']++;
		}
		for (int i = 0; i < Sb.length(); i++) {//����Sb�r��C�Ӧr��(a~z)�X�{����
			ASCIISb[Sb[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			for (int j = min(ASCIISa[i], ASCIISb[i]); j > 0; j--) { //min���涰(�Y2�r��b26�Ӧr�����A�X�{�W�v�P�ɤj��1��
				cout << (char)('a' + i);//�ഫ���r��
			}
		}
		cout << "\n";
	}
}

/*
�g�k2
string Sa,Sb;
	while (getline(cin, Sa)) {
		getline(cin, Sb);
		string store[101] = { "" };//�x�s2�r��ۦP���r��
		int La = Sa.length();//a�r�����
		int Lb = Sb.length();//b�r�����
		for (int i = 0; i < La; i++) {
			for (int j = 0; j < Lb; j++) {
				if (Sa[i] == Sb[j]) {
					store[i] = Sa[i];//�����ۦP�r��
					Sb.erase(j, 1);//�M���w�d��쪺�ۦP�r���A�קK���Ƨ�d
					break;//���������ĤG�Ӱj��A �z�ѦP�W
				}
			}
		}

		sort(store, store + 1000);//�����U�Ӫ��r���A�̷�a~z�Ƨ�

		for (int k = 0; k < 1000; k++) {
			cout << store[k];//��X
		}
		cout << endl;
	}
*/