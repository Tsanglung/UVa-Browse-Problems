#include <iostream>
#include <string>
using namespace std;

int i, t, j;
int m;//��Jm��r��
int n;//�@�꦳n�Ӧr��
int q;//��Jq��A��J�榡��(row col)�A�@�榳2�ơA�e�̬�row�A��̬�col
int row;//�x�}�C
int col;//�x�}��

int main()
{
	cin >> t;//��J����ƶq 
	while (t--)
	{
		cin >> m >> n >> q;//��J���� 
		cout << m << " " << n << " " << q << endl;//�Ӯ榡��X

		if (m < n)//���o���p���� 
		{
			n = m;
		}
		int flag[n + 1];//�P�_�̤j������άO�h�� 
		string is1[m + 2] = { "" };//�ȥX���ҥH�h�ŧi��� 
							 //�򥻤W�|�b��J���x�}�~��h�[�@��ť� 
		getline(cin, is1[0]);//cin����getline�|�X���ҥH�n�h���@�� 

		for (i = 1; i < m + 1; i++)//��J�x�} 
		{
			getline(cin, is1[i]);
			is1[i] = " " + is1[i] + " ";//���k�h�[�ť� 
		}

		for (i = 0; i < is1[1].length(); i++)//�W�U�h�[�ť� 
		{
			is1[0] += " ";
			is1[m + 1] += " ";
		}

		while (q--)
		{
			for (i = 0; i <= n; i++)//���s 
			{
				flag[i] = 1;
			}

			cin >> row >> col;//��J�����I 
			row += 1;//�]���x�}�~��h�[�ťթҥH�[1 
			col += 1;

			for (i = 1; flag[i - 1] == 1; i++)//�q���ߤ@��@��P�_ 
			{						 //i�N��ĴX�� 
				for (j = -i; j <= i; j++)
				{
					if (is1[row][col] != is1[row - i][col + j])//����W�ƪ��r 
					{
						flag[i] = 0;
						break;
					}
					if (is1[row][col] != is1[row + j][col + i])//�k�� 
					{
						flag[i] = 0;
						break;
					}
					if (is1[row][col] != is1[row + i][col + j])//�U�� 
					{
						flag[i] = 0;
						break;
					}
					if (is1[row][col] != is1[row - j][col - i])//���� 
					{
						flag[i] = 0;
						break;
					}
				}
			}

			for (i = 1; i <= n; i++)//��X 
			{
				if (flag[i] == 0)
				{
					cout << 1 + (i - 1) * 2 << endl;
					break;
				}
			}
		}
	}
	return 0;
}