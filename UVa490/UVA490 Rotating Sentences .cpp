#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, is1[100] = { "" };//��J�Φr�� 
    int i = 0, t;//��K�� 
    int num, maxlen = 0;//num�p�⦳�X�ӥy�l 
                        //maxlen�p��̪��y�l���� 
    while (getline(cin, a))//��J��� 
    {
        is1[i] = a;
        if (is1[i].length() > maxlen)//���o�̪��y�l������ 
        {
            maxlen = is1[i].length();
        }
        i++;
    }

    num = i;//�����y�l�ƶq 

    for (i = 0; i < maxlen; i++)//�}�l½���o
    {                    //i�N��C 
        int gap = 0;//�p��ťժ� 
        for (t = num - 1; t >= 0; t--)//t�N��� 
        {                    //num�N��y�l�ƶq�A�ҥHt��1�ŦX�}�C�n�D 
            if (i >= is1[t].length())//�p�G�W�X�ӥy���� 
            {                     //�N���p��n�H�h�֪ťէ@���N�� 
                gap++;
            }
            else
            {
                while (gap > 0)//����X�ťեH�N�������y�l 
                {
                    cout << " ";
                    gap--;
                }
                cout << is1[t][i];//�A��X�ӥy�l���r 
            }
        }
        cout << endl;//���� 
    }
    return 0;
}