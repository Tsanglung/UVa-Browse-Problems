#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n, len, temp;
    while (cin >> n)
    {
        int count[26] = { 0 };//�p�ƬY�r���X�{�X�����}�C
        char c_temp;
        char english[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//26�ӥѤp��j�Ƨǭ^��r���j�g
        char input[256];//��J�r��
        for (int i = 0; i <= n; i++)
        {
            cin.getline(input, 256);//��J�r��
            len = strlen(input);//�r�����
            for (int j = 0; j <= len; j++)
            {
                //�Y�r��X�{���P�j�p�g�����P�r���A�ҦpA=a
                if (input[j] <= 90 && 65 <= input[j])//ASCII�X �j�g�P�_
                    count[input[j] - 65]++;//�p�ơA��input[j]=A�AA��ASCII�X��65 =>count[0]++;
                else if (input[j] <= 122 && 97 <= input[j])//ASCII�X �p�g�P�_
                    count[input[j] - 97]++;//�p�ơA��input[j]=a�Aa��ASCII�X��97 =>count[0]++;
            }
        }
        for (int i = 0; i <= 25; i++)
        {
            for (int j = 0; j <= 24; j++)
            {
                if (count[j] < count[j + 1]) //�p�G�e���j��ᶵ���ܥ洫�A�X�{�̦h�����r������X
                {
                    temp = count[j];
                    c_temp = english[j];
                    count[j] = count[j + 1];
                    english[j] = english[j + 1];
                    count[j + 1] = temp;
                    english[j + 1] = c_temp;
                }
            }
        }
        for (int i = 0;; i++)
        {
            if (count[i] == 0)
                break;
            else
                cout << english[i] << " " << count[i] << endl;
        }
    }
    return 0;
}