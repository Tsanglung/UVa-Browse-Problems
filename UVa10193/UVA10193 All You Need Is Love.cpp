#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int i, n, t;
	string Cs1, Cs2;//����|��30��ҥH�Φr�� 

	cin >> n;//��J����ƶq 
	for (t = 1; t <= n; t++)
	{
		cin >> Cs1 >> Cs2;//��J����
		cout << "Pair #" << t << ": ";//�Ӯ榡��X 

		int cn1 = 0, cn2 = 0, dig;//�N��J�ন�Q�i���

		for (i = 0; i < Cs1.length(); i++)//�N�Ĥ@�ռƦr�ন�Q�i�� 
		{
			dig = Cs1[i] - '0';//�����o�Ӧ�ƪ��Ʀr 
			cn1 += dig * pow(2, Cs1.length() - i - 1);//�b���W������ƪ��� 
		}

		for (i = 0; i < Cs2.length(); i++)//�N�ĤG�ռƦr�ন�Q�i�� 
		{
			dig = Cs2[i] - '0';
			cn2 += dig * pow(2, Cs2.length() - i - 1);
		}

		if (cn2 > cn1)//�]���n������۰��k 
		{		   //�ҥH��������j���� 
			dig = cn2;
			cn2 = cn1;
			cn1 = dig;
		}

		do//�Q������۰��k�䤽�]�� 
		{
			dig = cn1 % cn2;
			cn1 = cn2;
			cn2 = dig;

		} while (dig != 0 && dig != 1);//�Y�l�Ƭ�0��ܦ����]�� 
							   //�Y��1��ܨ�Ƥ��� 
		if (dig == 0)//��X�榡
		{
			cout << "All you need is love!" << endl;
		}
		else
		{
			cout << "Love is not all you need!" << endl;
		}
	}
	return 0;
}