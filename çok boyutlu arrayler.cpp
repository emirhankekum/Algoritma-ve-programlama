#include<iostream>
using namespace std;

int main() {
	int matris[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	/*cout << matris[0][0] << endl;
	cout << matris[0][2] << endl;
	cout << matris[1][0] << endl;
	cout << matris[2][2] << endl;*/
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matris[i][j] << endl;
			//cout << "i: " << i << endl;
			//cout << "j: " << j << endl;
		}
	}

	return 0;
}