#include<iostream>
using namespace std;

/*void selamlama(); // a�a��da b�yle bi fonksiyon tan�mlad���m�z� bildirmemiz gerekir.

int main() {

	selamlama(); // fonksiyon �a��rma (function calling)



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



