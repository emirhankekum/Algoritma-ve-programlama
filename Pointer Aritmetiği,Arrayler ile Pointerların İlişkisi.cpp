#include<iostream>
using namespace std;



int main() {
/*	int array[] = {1,2,3,4};
	int* ptr = array;
	int* ptr = &array[2]; // bunun anlam� arrayde 3. indeksin adresini al demek. & --> bu i�aret bir de�i�kenin adresini �a��rmak i�in kullan�l�r
	cout << ptr << endl;
*/
	string array[] = { "emirhan","tugra","kekum" };
	string* ptr = array;
	string* emo = array;
	cout << emo + 1 << endl;
	cout << ptr + 1 << endl;
	cout << *ptr  << endl;
	cout << *(ptr + 1) << endl;
	cout << ptr[1] << endl;



	return 0;
}