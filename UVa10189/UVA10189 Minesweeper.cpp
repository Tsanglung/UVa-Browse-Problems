#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int i, t, j, m, n, c = 1;

	while (cin >> n >> m && (n != 0 && m != 0))//��J��C�� 
	{
		if (c > 1)//��X�U�@����ƫe���� 
		{
			cout << endl;
		}
		cout << "Field #" << c << ":" << endl;//�Ӯ榡��X

		string s1[n + 2] = { "" };

		getline(cin, s1[0]);//cin��getline�|�����D�n�h���@�� 

		for (i = 1; i <= n; i++)//��J���� 
		{
			getline(cin, s1[i]);
			s1[i] = "0" + s1[i] + "0";//�Ȧ��W�X�}�C���d�򪺰��D 
								//�h�[�@��0�b�~�� 
		}
		for (i = 0; i < m + 2; i++)//�h�[�@��0 
		{
			s1[0] += "0";
			s1[n + 1] += "0";
		}

		for (i = 1; i <= n; i++)//�p��a�p�� 
		{
			for (t = 1; t <= m; t++)
			{
				if (s1[i][t] == '.')//�u�n�ˬd"." 
				{
					int count = 0;
					stringstream ss;//��Ʀr�ন�r��� 
					ss.clear();//�ȥX�����M�� 

					for (j = -1; j < 1; j++)//j���൥��1���M�|�����ˬd 
					{				 //�U�������t���]�n�`�N�n 
						if (s1[i - 1][t + j] == '*')//�ˬd�W�����S���a�p 
						{
							count++;
						}
						if (s1[i + j][t + 1] == '*')//�k��
						{
							count++;
						}
						if (s1[i + 1][t - j] == '*')//�U��
						{
							count++;
						}
						if (s1[i - j][t - 1] == '*')//���� 
						{
							count++;
						}
					}

					ss << count;//�Ʀr��r�� 
					ss >> s1[i][t];
				}
			}
		}

		for (i = 1; i <= n; i++)
		{
			s1[i].assign(s1[i], 1, m);//��0�h��

			//srt1.assign(str2,b,l)�Ϊk����str2�r�ꤤ
			//�qb�}�l�Nl���ת���str1 

			cout << s1[i] << endl;//��X 
		}

		c++;//���U�@������ 
	}
	return 0;
}