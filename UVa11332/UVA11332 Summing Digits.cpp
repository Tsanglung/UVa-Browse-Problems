#include<iostream>
#include<string>
using namespace std;

int Sum(int temp) { //����B�⪽��ѤU�Ӧ��
	int sum = 0;
	while (temp > 0) { 
		sum += temp % 10;
		temp /= 10;
	}
	if (sum > 9)return Sum(sum);
	else return sum;
}

int main() {
	string CinNumber;
	string Zero = {'0'};
	while (getline(cin,CinNumber)) {
		int temp = 0;//�x�s��J�r��C�@�r���ۥ[���G
		if (CinNumber == Zero)break;//�Y��J�r�ꬰ0�A�����j��
		int lenght = CinNumber.length(); //�r�����
		if (lenght >= 2) {//�Y�r����פj�󵥩�2�A�]�N�O�ʦ��(�t)�H�W
			for (int i = 0; i < lenght; i++) {
				temp += CinNumber[i] - '0'; //�N�r��C�@�Ӧr���ন�Ʀr�ۥ[
			}
			cout << Sum(temp) << endl;
		}
		else cout << CinNumber << endl;
	}
}