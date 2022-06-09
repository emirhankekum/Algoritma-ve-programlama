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
//const ile yazmamýza raðmen a'nýn gösterdikleri deðiþiyor. biz a'yý pointer olarak aldýk pointer olarak aldýðýmýz için adresi deðþebiliyor.
//ancak biz o adresteki deðeri deðiþtiremeyiz çünkü const ile sabitledik. 