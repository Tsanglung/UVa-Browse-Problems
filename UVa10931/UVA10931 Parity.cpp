#include <iostream>
#include <string>
using namespace std;
int main()
{
	int in1;
	while (cin >> in1)
	{
		int sum = 0;//sum�������X��1 
		string Mod_2 = "";//�ন2�i�쪺�� 

		if (in1 == 0)//��J0�N���� 
		{
			break;
		}

		while (in1 > 0)//10�i���ন2�i�� 
		{			//�εu���k�@����2 
			if (in1 % 2 == 1)//�l1 
			{
				Mod_2 = "1" + Mod_2;//�n�q�u���k�̫᪺1�g�^�h 
				sum += 1;//�p�⦳�X��1 
			}

			else//�l0 
			{
				Mod_2 = "0" + Mod_2;
			}

			in1 = in1 / 2;
		}

		cout << "The parity of " << Mod_2 << " is " << sum << " (mod 2)." << endl;//��X 
	}
	return 0;
}

/*
int main() {
    stack<int> st;
    int n;
    while (cin >> n && n) {
        int parity = 0;
        while (n) {
            parity += n % 2;
            st.push(n % 2);
            n /= 2;
        }
        cout << "The parity of ";
        while (!st.empty()) {                           //�u�n���|st�٦���
            cout << st.top();   //�L�Xstack�̤W������
            st.pop();             //�q���|st�R�����̤W������
        }
        cout << " is " << parity << " (mod 2).\n";
    }
}
*/