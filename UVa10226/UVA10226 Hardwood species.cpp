#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int i, n;
	vector<string> vs;//vector�x�s��J
	string is1;

	cin >> n;//��J����ƶq 
	getline(cin, is1);//cin��getline�|�����D�A�n�h���@�� 
	getline(cin, is1);//���o�Ť@�� 

	while (n--)//��J����ƶq 
	{
		vs.clear();//���s�}�C 
		double sum = 0, count = 1, p;

		while (getline(cin, is1) && is1 != "")//��J���� 
		{
			vs.push_back(is1);
		}

		sort(vs.begin(), vs.end());//���r��A~Z�ƦC 
		sum = vs.size();//���o�`�� 

		for (i = 0; i < sum; i++)
		{
			if (vs[i] == vs[i + 1])//�p�G�ۦP���W�r���ο�X 
			{
				count++;//�p�⦸�ƥ[1 
			}
			else if (vs[i] != vs[i + 1])//���P�W�r�A�p�⭱�n��Ҩÿ�X 
			{
				p = (count / sum) * 100;//�p�⭱�n��� 
				cout << fixed << setprecision(4);//��T��p���I�U�|�� 
				cout << vs[i] << " " << p << endl;//��X 
				count = 1;//���s 
			}
		}

		if (n != 0)//�̫�@�մ��ꤣ�δ��� 
		{
			cout << endl;
		}
	}
	return 0;
}