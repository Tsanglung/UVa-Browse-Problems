#include<iostream>
using namespace std;
int main() {
	int counter;
	cin >> counter;
	while (counter--) {
		int A, B;//A���ⶤ�ۥ[���ơAB���ⶤ�ۥ[����
		int ansA, ansB;//�ⶤ�����
		cin >> A >> B;
		ansA = (A + B) / 2;
		ansB = A - ansA;
		//�Y�ۥ[���Ƥp��۴����"�Ϊ�"�ۥ[���ƻP�۴���Ƥ��O2�����ơA�h��X"���i��"
		if (A < B || ((A + B) % 2 != 0)) { cout << "impossible" << endl; }
		else { cout << ansA << " " << ansB << endl; }
	}

}