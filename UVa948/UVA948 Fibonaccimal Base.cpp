#include<iostream>
using namespace std;
int main()
{
	int F[39];
	int a, n, t;
	F[0] = 1, F[1] = 2;
	for (a = 2; a < 39; a++) //�t��
	{
		F[a] = F[a - 1] + F[a - 2];
	}
	cin >> t;//��Ƽ�
	while (t--)
	{
		cin >> n;//��J�Ʀrn�A�P�_n��(fib)��
		cout << n << " = ";
		int flag = 0;
		for (a = 38; a >= 0; a--)
		{
			if (n / F[a] == 1)
			{
				cout << "1";
				n %= F[a], flag = 1;
			}
			else if (flag)
			{
				cout << "0";
			}
		}
		cout << " (fib)" << endl;
	}
	return 0;
}