#include<iostream>
using namespace std;

int main() {
	// int i;
	/*for (int i = 0; i < 10; i++) {
		cout<< "i: " << i << endl;

	}*/
	int sayi;
	cout << "sayi: ";
	cin >> sayi;
	int faktoriyel = 1 ;

	for (int i = 1; i <= sayi; i++) {
		faktoriyel *= i;
		

	}
	cout << sayi << "! faktoriyel: " << faktoriyel << endl;

	return 0;
}

