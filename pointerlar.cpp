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
	cout << "degisgenin adresi:" << ptr << endl; //deðiþkenin adresini almak için bu þekilde kullanýlabilir.
	cout << "degisgenin adresi:" << emo << endl;
	cout << "degisgenin degeri: " << *ptr << endl; //deðiþkenin deðerini bu þekilde ekrana yazdýrabiliriz.
	*ptr = 6; // bu þekilde deðiþkene yeni deðer atayabiliriz.
	cout << "degisgenin yeni degeri: " << *ptr << endl;*/
	int a = 10;
	cout << "a degiskeninin degeri: " << a << endl;
	degisgenDegistirme(&a);
	cout << "a degiskeninin fons. sonraki degeri: " << a << endl;
	
	
	
	
	return 0;
}