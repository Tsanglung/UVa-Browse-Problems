#include <iostream>
#include<string>
using namespace std;

int main() {
    int sum, mx, temp;
    string CinR;
    while (getline(cin, CinR)) {
        sum = 0;//��10�i��
        mx = 1;
        int i;
        for (i = 0; i < CinR.size(); i++) {
            if (CinR[i] >= '0' && CinR[i] <= '9') { //0~9 10�ӼƦr
                temp = CinR[i] - '0';
            }
            else if (CinR[i] >= 'A' && CinR[i] <= 'Z') { //A~Z 26�r��
                temp = CinR[i] - 'A' + 10; //+10 �e��0~9�A10�ӼƦr
            }
            else if (CinR[i] >= 'a' && CinR[i] <= 'z') {
                temp = CinR[i] - 'a' + 36; //+36 �e��0~9�AA~Z�A36�Ӧr��
            }
            if (mx < temp)
                mx = temp;
            sum += temp;
        }
        for (i = mx; i < 62; i++) //mx�O��e�i���62�i��
            if (!(sum % i)) {//�Y�ন10�i��i�H�Q(N-1)�i��㰣
                cout << i + 1 << "\n";//�Q(N-1)�㰣���̤pN�i��
                break;
            }

        if (i == 62)
            cout << "such number is impossible!\n";
    }
    return 0;
}