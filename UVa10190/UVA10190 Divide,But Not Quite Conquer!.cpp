#include<iostream>
using namespace std;
int main() {
	long int a, b;
	while (cin >> a >> b) {
		if (a < 2 || b < 2) { cout << "Boring!" << endl; continue; }
		int array[1001]; //�}�C�x�s���G
		int x = 0; 
		int last;
		while (a % b == 0) { //�p��a�O�_��b������ƨèD�Xb��0���Ab��1��~b��n��
			array[x] = a;
			a = a / b;
			x++;
		}
		if (a != 1) { cout << "Boring!" << endl; }//a����b�������
		else { //�Y�O�A�h��Xb��0��~b��n�����
			for (int w = 0; w < x; w++) { cout << array[w] << " "; }
			cout << "1" << endl;
		}
	}
}
