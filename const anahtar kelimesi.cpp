#include<iostream>
using namespace std;


int main() {
	//const anahtar kelimesi kullanılan değişkenler, arrayler daha sonradan değiştirilemez.
	/*const int a = 30;
	a = 40;
	cout << a << endl;*/
	const int b[] = { 10,20,30,40,50 };
	//b[2] = 100;
	cout << b[3] << endl;

	return 0;
}