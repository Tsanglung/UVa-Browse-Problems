#include<iostream>
using namespace std;

long long int subresult(long long int self, long long int enermy) {
	return abs(self - enermy);//�۴�������
}

int main() {
	long long int selfarmy, enermy;//�ۤv�H�B�ĭx
	while (cin >> selfarmy >> enermy && selfarmy &&enermy) {
		cout << subresult(selfarmy, enermy) << endl;
	}
}