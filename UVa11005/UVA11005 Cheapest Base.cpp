#include <iostream>
using namespace std;

int main()
{
	int Data, Case = 1, i, number_counter, number, cn1, re, cost[36];

	cin >> Data;//��J����� 
	while (Case <= Data)
	{
		cout << "Case " << Case << ":" << endl;//��X�ĴX�� 

		for (i = 0; i < 36; i++)//��J��O 
		{
			cin >> cost[i];
		}

		cin >> number_counter;//��J�Ʀr�ƶq 
		while (number_counter--)
		{
			cin >> number;//��J�Ʀr 

			int min = 0, de[37] = { 0 };//�k�s 

			for (i = 2; i <= 36; i++)//�p��C�Ӷi�쪺���� 
			{
				cn1 = number;//�쥻���Ʀr����ʩҥH�Ψ�L�ܼ� 
				int sum = 0;//�k�s 

				while (cn1 > 0)//�Q�εu���k�N�Q�i���ন����i�� 
				{
					re = cn1 % i;//���o�l�ƴN�O�Ӷi��n�઺�Ʀr 
					sum = sum + cost[re];//�p����� 
					cn1 = cn1 / i;
				}

				if (min == 0 || sum <= min)//�����̤֪���O 
				{
					de[i] = sum;
					min = sum;
				}
			}

			cout << "Cheapest base(s) for number " << number << ":";//��X 

			for (i = 2; i <= 36; i++)
			{
				if (de[i] == min)//��X��O�̤֪��i�� 
				{
					cout << " " << i;
				}
			}
			cout << endl;
		}

		if (Case < Data)//�̫�@�մ��ꤣ�δ��� 
		{
			cout << endl;
		}
		Case++;
	}
	return 0;
}