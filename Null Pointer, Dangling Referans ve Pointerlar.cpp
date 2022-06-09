#include<iostream>
using namespace std;

int main() {
	int* ptr1=nullptr;
	int* ptr2=nullptr;
	ptr1 = new int;

	*ptr1 = 10;
	ptr2 = ptr1;
	delete ptr1;
	
	cout << *ptr2 << endl; // normalde hata verir çalýþmaz çünkü bellekte ayrýlan yeri iptal ettik ve pc o yeri kullanmaya baþladý.
							// bu yüzden ptr2 yazacak alan bulamaz ve kod çalýþtýðýnda hata alýr.



	return 0;
}