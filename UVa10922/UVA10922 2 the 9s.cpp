#include<iostream>
#include<string>
using namespace std;


int main()
{
	while (1)
	{
		string arr;
		int sum = 0;//��J�r��C��ƪ��`�M
		int count = 0;
		int degree = 0;//����9-degree����

		cin >> arr;
		if (arr[0] - '0' == 0) break;//��J��0�����{��

		for (int i = 0; i < arr.length(); i++)
			sum += arr[i] - '0';

		while (sum % 9 == 0)
		{
			if (sum == 9)
			{
				degree++;
				break;
			}

			count = 0;
			while (sum != 0)
			{
				count += sum % 10;
				sum /= 10;
			}
			sum = count;
			degree++;
		}

		//�Y�C��ƪ��`�M��9�����ơA�h��J�ƧY��9������
		if (sum % 9 == 0)  cout << arr << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
		else cout << arr << " is not a multiple of 9." << endl;

	}
}