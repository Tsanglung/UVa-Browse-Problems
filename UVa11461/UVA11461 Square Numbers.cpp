#include<iostream>
#include<cmath>//�ϥ�sqrt�禡
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b && a && b) {
		if (a == 0 && b == 0)break;//����Ҭ�0�����{��
		int num = 0;
		int i, j, sq;
		for (i = a; i <= b; i++) {
			sq = sqrt(i);//sqrt�}�ڸ�
			if (sq * sq == i)num++;//�P�_�O�_�����������
		}
		cout << num << endl;
	}
}
