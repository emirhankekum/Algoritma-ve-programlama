#include<iostream>
using namespace std;

int main() {
	int* ptr1=nullptr;
	int* ptr2=nullptr;
	ptr1 = new int;

	*ptr1 = 10;
	ptr2 = ptr1;
	delete ptr1;
	
	cout << *ptr2 << endl; // normalde hata verir �al��maz ��nk� bellekte ayr�lan yeri iptal ettik ve pc o yeri kullanmaya ba�lad�.
							// bu y�zden ptr2 yazacak alan bulamaz ve kod �al��t���nda hata al�r.



	return 0;
}