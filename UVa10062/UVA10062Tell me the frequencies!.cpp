#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, t, r = 0;
	string ASCIIstr;
	bool Flag = false;

	while (getline(cin, ASCIIstr))//��J���� 
	{
		if (Flag)//��X�U����ƫe���� 
		{
			cout << endl;
		}

		int ASCII[97] = { 0 }, count[97] = { 0 };

		for (i = 0; i < 96; i++)//����ASCII���� 
		{
			ASCII[i] = i + 32;
		}

		for (i = 0; i < ASCIIstr.length(); i++)//�p���J�r�ꪺASCII�X�{���� 
		{
			count[ASCIIstr[i] - 32]++;
		}

		for (i = 0; i < 96; i++)//�ή�w�ƦC�k 
		{                 //�̷��D�حn�D�ƦC 
			for (t = 0; t < 96 - i - 1; t++)
			{
				if (count[t] > count[t + 1])//�Ʀr���j�b�᭱ 
				{
					int temp = ASCII[t];
					ASCII[t] = ASCII[t + 1];
					ASCII[t + 1] = temp;
					temp = count[t];
					count[t] = count[t + 1];
					count[t + 1] = temp;
				}

				else if (count[t] == count[t + 1] && ASCII[t] < ASCII[t + 1])
				{//�Ʀr�@�ˮ�ASCII���j���b�᭱ 
					int temp = ASCII[t];
					ASCII[t] = ASCII[t + 1];
					ASCII[t + 1] = temp;
				}

			}
		}
		for (i = 0; i < 96; i++)//��X
		{
			if (count[i] != 0)
			{
				cout << ASCII[i] << " " << count[i] << endl;
			}
		}
		Flag = true;//�Ĥ@����ƫ�n���� 
	}
	return 0;
}