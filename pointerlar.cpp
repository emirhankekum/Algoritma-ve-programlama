#include<iostream>
using namespace std;
void degisgenDegistirme(int* ptr) {
	*ptr = 20;
	cout << "fonks. degisken degeri: " << *ptr << endl;


}
int main() {
	/*
	int a = 5;
	int *ptr = &a;
	int* emo = &a;

	cout << "degisgenin adresi:" << &a << endl;
	cout << "degisgenin adresi:" << ptr << endl; //de�i�kenin adresini almak i�in bu �ekilde kullan�labilir.
	cout << "degisgenin adresi:" << emo << endl;
	cout << "degisgenin degeri: " << *ptr << endl; //de�i�kenin de�erini bu �ekilde ekrana yazd�rabiliriz.
	*ptr = 6; // bu �ekilde de�i�kene yeni de�er atayabiliriz.
	cout << "degisgenin yeni degeri: " << *ptr << endl;*/
	int a = 10;
	cout << "a degiskeninin degeri: " << a << endl;
	degisgenDegistirme(&a);
	cout << "a degiskeninin fons. sonraki degeri: " << a << endl;
	
	
	
	
	return 0;
}