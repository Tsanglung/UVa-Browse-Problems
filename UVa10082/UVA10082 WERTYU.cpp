#include<iostream>
#include<cstring>
using namespace std;

int main() {
	string CInKeyboard;
	const char keyboardstr[] = { "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./" };
	int lenght = strlen(keyboardstr);
	char hash[256];
	for (int i = 0; i < 256; i++) {
		hash[i] = i;
	}
	for (int i = 1; i < lenght; i++) { //�N�~�t��Jhash
		hash[keyboardstr[i]] = keyboardstr[i - 1];
	}
	while (getline(cin, CInKeyboard)) { //��J
		for (int i = 0; i < CInKeyboard.length(); i++) {//��X���G
			cout << hash[CInKeyboard[i]];
		}
		cout << endl;
	}
}
