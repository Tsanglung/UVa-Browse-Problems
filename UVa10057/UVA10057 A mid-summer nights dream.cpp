#include<iostream>
using namespace std;
int main() {
	int TestData;//����
	while (cin >> TestData && TestData) {//�h����
		int TestArray[1001];
		for (int i = 0; i < TestData; i++) {
			cin >> TestArray[i];
		}
		int temp = 0;
		for (int i = 0; i < TestData; i++) {//�Ƨ� �p��j
			for (int j = i + 1; j < TestData; j++) {
				if (TestArray[i] > TestArray[j]) {
					temp = TestArray[j];
					TestArray[j] = TestArray[i];
					TestArray[i] = temp;
				}
			}
		}
		int MaxMidNumber,MinMidNumber; //�̤j����ơB�̤p�����
		int Method; //��Ӥ���ƶ��s�b�h�֭Ӿ�ơ]��ҥi�ର���ƦC������ơ^
		if (TestData % 2 == 0) {//�䤤���
			MinMidNumber = TestArray[TestData / 2 - 1];//�̤p�����
			MaxMidNumber = TestArray[TestData / 2];//�̤j�����
			Method = MaxMidNumber - MinMidNumber + 1; //��Ӥ���ƶ��s�b�h�֭Ӿ�ơ]��ҥi�ର���ƦC������ơ^
		}
		else {//TestData���_�ơA�̤j����Ƶ���̤p�����
			MinMidNumber = TestArray[TestData / 2];
			MaxMidNumber = TestArray[TestData / 2];
			Method = 1;//�̤j����Ƶ���̤p����ơA��ƶ���ƥu��1��
		}

		int counter = 0;
		for (int i = 0; i < TestData; i++) {
			//TestData�ӼƤ����X�ӭӼƻP�����(�̤jor�̤p)�۵�
			if (MaxMidNumber == TestArray[i] || MinMidNumber == TestArray[i])counter++;
		}

		cout << MinMidNumber << " " << counter << " " << Method << endl;
	}
}