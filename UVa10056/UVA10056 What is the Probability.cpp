#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	int TestData; //����
	cin >> TestData;
	int Players;//���a�ƶq
	int Nplayer;//��N�Ӫ��a
	double Probability;//�Ӳv
	while (TestData--) {
		cin >> Players >> Probability >> Nplayer;
		double NowProbablity = 1;//��e�Ӳv
		double AnsProbablity = 0;//�̫ᵲ�G�Ӳv
		int Round = 0;//�^�X��
		do {
			NowProbablity = pow(1 - Probability, Round * Players) *
				pow((1 - Probability), Nplayer - 1) * Probability;
			//pow(1 - Probability, Round* Players)�O�����Round + 1�������v
			//pow((1- Probability),Nplayer - 1)�O�ӽ��e�����H�骺���v
			//Probability �O�ۤv�Ӳv�����v
			AnsProbablity += NowProbablity;
			Round++;
		} while (NowProbablity > 0.000000000000001);
		cout << fixed << setprecision(4) << AnsProbablity << endl;//����p�ƫ�|��
	}
}



