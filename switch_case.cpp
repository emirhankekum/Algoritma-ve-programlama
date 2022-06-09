#include <iostream>
using namespace std;

int main() {
	int a, b;
	int islem;
	cout << "iki sayi giriniz:" << endl;
	cin >> a;
	cin >> b;
	cout << "islemi seciniz: "<<endl;
	cout << "1. islem => toplama " << endl;
	cout << "2. islem => cikarma " << endl;
	cout << "3. islem => carpma " << endl;
	cout << "4. islem => bolme " << endl;
	cin >> islem;
	switch (islem) {
	case 1:
		cout << "1. islemi sectiniz" << endl;
		cout << "islem sonucu:" << a + b << endl;
		break;
	case 2:
		cout << "2. islemi sectiniz" << endl;
		cout << "islem sonucu:" << a - b << endl;
		break;
	case 3:
		cout << "3. islemi sectiniz" << endl;
		cout << "islem sonucu:" << a * b << endl;
		break;
	case 4:
		cout << "4. islemi sectiniz" << endl;
		cout << "islem sonucu:" << a / b << endl;
		break;
	default:
		cout << "gecersiz islem..." <<  endl;
		break;

	}




	return 0;
}