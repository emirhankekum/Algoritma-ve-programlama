#include<iostream>
using namespace std;
void degerDegistirme(int&ref) {
	ref = 20;

}
int main() {
	// referanslar pointerlardan farkl� olarak de�i�kenin adresini de�il de�i�kenin de�erini al�rlar.
	int a = 10;
	/*int& ref = a;
	ref++;*/
	cout << "a'nin degeri " << a << endl;
	degerDegistirme(a);
	cout << "a'nin yeni degeri " << a << endl;


	return 0;
}