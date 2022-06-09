#include<iostream>
using namespace std;

class Employee {
public:
	string* s;
	int* i;

	Employee(string str,int ivalue ) {
		s = new string;
		i = new int;
		*s = str;
		*i = ivalue;

		
	}
	void show() {
		cout << "stringh deger: " << *s << " int deger: " << *i << endl;
	}
	~Employee() {		//bu komutla biz pointerlarla bellekte açtýðýmýz alanýn tamamýný bilgisyara geri vermiþ oluyoruz.  
		delete s;		//"~" iþareti ile destructor komutunu çaðýrmýþ oluyoruz.	
		delete i;
		cout << "destructor cagirildi" << endl;

	}
};

int main() {
	Employee* emp = new Employee("emirhan",20);
	emp->show();

	delete emp;


	return 0;
}