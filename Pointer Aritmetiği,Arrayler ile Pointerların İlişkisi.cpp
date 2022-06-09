#include<iostream>
using namespace std;



int main() {
/*	int array[] = {1,2,3,4};
	int* ptr = array;
	int* ptr = &array[2]; // bunun anlamý arrayde 3. indeksin adresini al demek. & --> bu iþaret bir deðiþkenin adresini çaðýrmak için kullanýlýr
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