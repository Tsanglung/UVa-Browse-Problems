#include <iostream>
using namespace std;

int main()
{
	long long s, d;//�Ʀr�ܤj��long long 
					//s���Ĥ@�ծȦ�ΤH��
					//d����d�Ѭd��J��s�����Ȧ�ΤH��
	while (cin >> s >> d)//��J���� 
	{
		while (d > 0)//d�@����s����d�p�󵥩�0 
		{		  //�o��s�N�O���� 
			d = d - s;
			s++;
		}
		//��X�b��D�ѤJ���Ȧ�ΤH��
		cout << s - 1 << endl;//�]��d�p��0�������j��
						//s���|�[1�ҥH������^�� 
	}
	return 0;
}