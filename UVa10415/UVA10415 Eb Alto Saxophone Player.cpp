#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, i, t;
	string note;
	cin >> n;
	getline(cin, note);//cin��getlne�|�X���D�A�ҥH�h�Τ@�� 
	while (n--)//��J�ʧ@���� 
	{
		getline(cin, note);//��J�|���ťթҥH��getline 
		int f[10] = { 0 }, now[10] = { 0 }, last[10] = { 0 };
		for (i = 0; i < note.length(); i++)
		{
			for (t = 0; t < 10; t++)
			{
				last[t] = now[t];//�����W���O�_���� 
				now[t] = 0;//�M�� 
			}

			if (note[i] >= 'c' && note[i] <= 'g')//�B�z "c"��"g"
			{
				for (t = 1; t <= 3; t++)
				{
					now[t] = 1;
				}
				for (t = 6; t <= 9 - (note[i] - 'c'); t++)
				{
					now[t] = 1;
				}
			}
			else if (note[i] == 'a')//"a" 
			{
				now[1] = 1;
				now[2] = 1;
			}
			else if (note[i] == 'b')//"b"
			{
				now[1] = 1;
			}
			else if (note[i] == 'C')//"C"
			{
				now[2] = 1;
			}
			else if (note[i] >= 'D' && note[i] <= 'F')//"D"��"F" 
			{
				for (t = 0; t <= 3; t++)
				{
					now[t] = 1;
				}
				for (t = 6; t <= 8 - (note[i] - 'D'); t++)
				{
					now[t] = 1;
				}
			}
			else if (note[i] == 'G')//"G"
			{
				for (t = 0; t < 4; t++)
				{
					now[t] = 1;
				}
			}
			else if (note[i] == 'A')//"A"
			{
				for (t = 0; t < 3; t++)
				{
					now[t] = 1;
				}
			}
			else if (note[i] == 'B')//"B"
			{
				for (t = 0; t < 2; t++)
				{
					now[t] = 1;
				}
			}

			for (t = 0; t < 10; t++)
			{
				if (last[t] == 0 && now[t] == 1)//�W���S���o�������~��@�� 
				{
					f[t]++;
				}
			}
		}

		for (t = 0; t < 10; t++)//��X 
		{
			cout << f[t];
			if (t != 9)//�̫�@�ӼƦr���Ϊť� 
			{
				cout << " ";
			}
		}
		cout << endl;//�O�o���� 
	}
	return 0;
}