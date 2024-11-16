#include<iostream>
using namespace std;

int Algorithm(int i,int j) 
{
	int temp;//�洫
	if (i > j) //�Y�e�Ƥj���ƫh�洫�A���Ʀr���j�̩��
	{
		temp = i;
		i = j;
		j = temp;
	}
	int counter;//�p�ƬY�Ʀr���ͪ�cycle��
	int max = 0;//�̤jcycle��
	for (i; i <= j; i++) {
		counter = 1;
		int n = i;
		while (n != 1) { //�W�h
			if (n % 2 == 0) {
				n /= 2;
			}
			else if (n % 2 != 0) {
				n = 3 * n + 1;
			}
			counter++;//�p�Ʋ��ͪ�cycle
		}
		if (counter > max) { max = counter; }//�Y�o��s���̤jcycle�A�h����
	}
	return max;
}

int main() 
{
	int i, j;
	while (cin >> i >> j && i && j) {
		cout << i << ' ' << j << ' ' << Algorithm(i,j) << endl;
	}
}