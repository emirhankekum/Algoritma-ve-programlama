#include<iostream>
using namespace std;

void printArray(const int* a, const int* b) {
	for (; a != b; a++) {
		cout << "eleman " << *a << endl; 

	}
}

int main() {
	int array[] = { 10,20,30,40,50,60,70,80,90,100 };

	printArray(array + 2, array + 7);


	return 0;
}
//const ile yazmam�za ra�men a'n�n g�sterdikleri de�i�iyor. biz a'y� pointer olarak ald�k pointer olarak ald���m�z i�in adresi de��ebiliyor.
//ancak biz o adresteki de�eri de�i�tiremeyiz ��nk� const ile sabitledik. 