#include<iostream>
using namespace std;

/*void selamlama(); // aþaðýda böyle bi fonksiyon tanýmladýðýmýzý bildirmemiz gerekir.

int main() {

	selamlama(); // fonksiyon çaðýrma (function calling)



	return 0;

}

void selamlama() {
	cout << "selamlar" << endl;

}
*/
void factorial(int sayi) {
	int faktoriyel = 1;

	for (int i = 2; i <= sayi; i++) {
		faktoriyel *= i;

	}
	cout << "faktoriyel:" << faktoriyel << endl;

}




int main() {
	int sayi;
	cout << "sayi giriniz";
	cin >> sayi;
	factorial(sayi);

	return 0;
}



