#include <iostream>
using namespace std;

int main()
{
	int c, month, day;
	cin >> c;//��J����ƶq 

	while (c--)
	{
		cin >> month >> day;//��J������ 

		for (int i = month - 1; i >= 1; i--)//�N�����������Ѽ� 
		{						//i�N���e����� 
			if (i == 2)//2�� 
			{
				day = day + 28;
			}
			else if (i % 2 == 0)//���Ƥ� 
			{
				if (i >= 8)//�K�뤧�� 
				{
					day = day + 31;
				}
				else//�K��H�e 
				{
					day = day + 30;
				}
			} 
			else if (i % 2 == 1)//�_�Ƥ� 
			{
				if (i >= 8)//�K��� 
				{
					day = day + 30;
				}
				else//�K��e 
				{
					day = day + 31;
				}
			}
		}

		if (day % 7 == 1)//2011�~�Ĥ@�ѬO�P���� 
		{
			cout << "Saturday" << endl;
		}
		else if (day % 7 == 2)
		{
			cout << "Sunday" << endl;
		}
		else if (day % 7 == 3)
		{
			cout << "Monday" << endl;
		}
		else if (day % 7 == 4)
		{
			cout << "Tuesday" << endl;
		}
		else if (day % 7 == 5)
		{
			cout << "Wednesday" << endl;
		}
		else if (day % 7 == 6)
		{
			cout << "Thursday" << endl;
		}
		else if (day % 7 == 0)
		{
			cout << "Friday" << endl;
		}
	}
	return 0;
}