#include <iostream>
using namespace std;

void swap(int* a, int* b)//�洫���禡 
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int i, t, n, l;

	while (cin >> n)//��J����ƶq 
	{

		while (n--)
		{
			cin >> l;//��J�ƦC���� 
			int num[l] = { 0 }, count = 0;

			for (i = 0; i < l; i++)//��J�ƦC 
			{
				cin >> num[i];

			}

			for (i = 0; i < l; i++)//��w�ƦC�k 
			{
				for (t = 0; t < l - i - 1; t++)
				{
					if (num[t] > num[t + 1])
					{
						swap(&num[t], &num[t + 1]);//�洫 
						count++;//�p�⦸�� 
					}
				}
			}

			cout << "Optimal train swapping takes " << count << " swaps." << endl;//��X
		}
	}
	return 0;
}