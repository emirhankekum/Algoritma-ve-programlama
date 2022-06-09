#include<iostream>
using namespace std;
void degerDegistirme(int&ref) {
	ref = 20;

}
int main() {
	// referanslar pointerlardan farklı olarak değişkenin adresini değil değişkenin değerini alırlar.
	int a = 10;
	/*int& ref = a;
	ref++;*/
	cout << "a'nin degeri " << a << endl;
	degerDegistirme(a);
	cout << "a'nin yeni degeri " << a << endl;


	return 0;
}