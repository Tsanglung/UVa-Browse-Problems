#include <iostream>
#include <string>
#include <iomanip>  //setprecision ��T���ȥ�
#include <cmath>    //�ƾǹB��
using namespace std;

int main()
{

    double a, s, r = 6440, pi = 3.14159265359;//r�O�D�ص����a�y�b�| 
    string an;

    while (cin >> s >> a >> an)//��J����
    {
        if (an == "min")//�����ഫ 
        {            //1(deg)����60(min) 
            a /= 60;
        }
        while (a >= 360)//�W�L360�״N�����p���P�쨤 
        {
            a -= 360;

        }
        if (a > 180)//�W�L180�׭n�Υt�@�䪺���� 
        {
            a = 360 - a;
        }
        cout << fixed << setprecision(6);//��T��p���I�U����
        cout << (s + r) * a * pi / 180 << " ";//��X����(���״�������) 
        cout << (s + r) * sin(a / 2 * pi / 180) * 2 << "\n";//��X���u�Z��
                                            //�Q�Τ����u�k��쪽�u�Z�� 
    }
    return 0;
}