#include <iostream>
#include <string>
using namespace std;

int main()
{
	string TeX;//��J�Φr�� 
	int i = 0; 
	int side = 0;//side��0�N��{�b�O���䪺���޸�
			   //side��1�N�O�k�� 
	while (getline(cin, TeX))//��J��� 
	{

		for (i = 0; i < TeX.length(); i++)
		{
			if (TeX[i] == '"' && side == 0)//���䪺���޸� 
			{
				cout << "``";
				side = 1;
			}
			else if (TeX[i] == '"' && side == 1)//�k�����޸� 
			{
				cout << "''";
				side = 0;
			}
			else//�S���޸� 
			{
				cout << TeX[i];
			}
		}
		cout << endl;//���� 
	}
	return 0;
}