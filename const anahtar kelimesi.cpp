#include<iostream>
using namespace std;


int main() {
	//const anahtar kelimesi kullan�lan de�i�kenler, arrayler daha sonradan de�i�tirilemez.
	/*const int a = 30;
	a = 40;
	cout << a << endl;*/
	const int b[] = { 10,20,30,40,50 };
	//b[2] = 100;
	cout << b[3] << endl;

	return 0;
}