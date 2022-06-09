#include<iostream>
using namespace std;

int main() {
	/*int* ptr = new int;
	*ptr = 5;
	delete ptr;*/
	int* ptr;
	int size;
	cout << "kac deger saklayacaksiniz: " << endl;
	cin >> size;
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
	for (int i = 0; i < size; i++) {
		cout << "deger girin: ";
		cin >> ptr[i];

	}
	for (int i = 0; i < size; i++) {
		cout << i << ". indeksteki deger: " << ptr[i] << endl;


	}
	delete[]ptr;



	return 0;
}