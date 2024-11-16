#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;

	while (cin >> n)//��J�Ʀr 
	{
		int em = 1, cn1 = n, cn2 = 0;

		for (i = 2; i <= sqrt(n); i++)//�P�_��J���ƬO�_����� 
		{
			if (n % i == 0)//���O��� 
			{
				em = 0;
				break;
			}
		}

		if (em == 1)//�p�G��J���ƬO��ƴN½�० 
		{		 //�A�P�_½�઺�ƬO���O��� 
			while (cn1 > 0)//½��Ʀr 
			{
				cn2 = cn2 * 10 + cn1 % 10;
				cn1 = cn1 / 10;
			}

			if (cn2 != n)//½��᪺�Ƥ���M�쥻���@�� 
			{
				em = 2;
				for (i = 2; i <= sqrt(cn2); i++)//�P�_�ӼƬO�_����� 
				{
					if (cn2 % i == 0)
					{
						em = 1;
						break;
					}
				}
			}
		}

		if (em == 2)//��Ӽ�(��Ӫ��� and ½�઺��)���O��� 
		{
			cout << n << " is emirp." << endl;
		}
		else if (em == 1)//��Ӫ��ƬO��� 
		{
			cout << n << " is prime." << endl;
		}
		else//��ӳ����O 
		{
			cout << n << " is not prime." << endl;
		}
	}
	return 0;
}