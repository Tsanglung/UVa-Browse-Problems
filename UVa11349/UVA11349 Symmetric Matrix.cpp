#include<iostream>
using namespace std;

int main() {
	int T, N, row, col, Tcnt = 1;
	char dummy[10];
	long long int matrix[100][101];//�x�}

	cin >> T;//����ƶq
	while (T--) {
		cin >> dummy >> dummy >> N;//��J�榡 N = ?(int)

		for (row = 0; row < N; row++)
			for (col = 0; col < N; col++)
				cin >> matrix[row][col];

		//�P�_�x�}�O�_���
		for (row = 0; row < N; row++)
			for (col = 0; col <= row; col++) {
				int rev_row = N - 1 - row, rev_col = N - 1 - col;
				if (matrix[row][col] < 0 || matrix[rev_row][rev_col] < 0 ||
					matrix[row][col] != matrix[rev_row][rev_col]) row = col = N;
			}
		cout << "Test #" << Tcnt++ << ": ";//�p������
		if (row == N)cout << "Symmetric." << endl;
		else cout << "Non-symmetric." << endl;
	}

	return 0;
}
