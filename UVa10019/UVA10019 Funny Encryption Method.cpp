#include<iostream>
#include<math.h>
using namespace std;

int DEC_Transform_Binary(int M) {//10�i����2�i��
	int counter = 0;//�p�Ʀ��X��1
	int Binary_M;//�ഫ�G�i�줧��
	while (M != 0) {
		Binary_M = M % 2;
		if (Binary_M == 1)counter++;
		M /= 2;
	}
	return counter;
}

int HEC_Transform_Binary(int M) {//16�i����2�i��
	int i = 0;
	int HECToDEC_M;//16�i����10�i��
	int DEC_M = 0;//16�i����10�i��
	while (M > 0) {
		HECToDEC_M = M % 10;
		DEC_M += (HECToDEC_M * pow(16, i));//16�i����10�i��
		M /= 10;
		i++;
	}
	//10�i����2�i��
	/*int counter = 0;//�p�Ʀ��X��1
	int Binary_M;//�ഫ�G�i�줧��
	while (DEC_M != 0) {
		Binary_M = DEC_M % 2;
		if (Binary_M == 1)counter++;
		DEC_M /= 2;
	}
	return counter;//�p�Ʀ��X��1*/
	//10�i����2�i��
	return DEC_Transform_Binary(DEC_M);
}
/*int Encryption(int m, int b1, int b2) {//���W�h��8.
	return m xor (b1 * b2);
}*/

int main()
{
	int n;
	cin >> n;
	int M;
	for (int i = 0; i < n; i++) {
		cin >> M;
		cout << DEC_Transform_Binary(M) << ' ' << HEC_Transform_Binary(M) << endl;
		//cout << Encryption(M, DEC_Transform_Binary(M), HEC_Transform_Binary(M)) << endl;
	}
}