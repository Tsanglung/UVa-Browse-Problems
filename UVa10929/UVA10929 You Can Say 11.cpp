#include<iostream>
#include<string>
using namespace std;

int main() {
	string num;
	while (getline(cin,num)) {
		int i;
		int len = num.size();
		if (len == 1 && num[0] == '0')break;//��J��0�h����
		int odd = 0, even = 0;
		for (i = 0; i < len; i++) {
			if (i % 2 == 0) {
				odd += (num[i] - '0');//�N�r���ର�Ʀr
			}
			else even += (num[i] - '0');//�N�r���ର�Ʀr
		}
		if ((odd - even) % 11 == 0) { //(num�_�Ʀ��`�M-���Ʀ��`�M/11)����0�A�Y��11����
			cout << num << " is a multiple of 11." << endl;
		}
		else cout << num << " is not a multiple of 11." << endl;
	}
}
