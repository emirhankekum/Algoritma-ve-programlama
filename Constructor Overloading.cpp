#include<iostream>
using namespace std;

class Employee {
private:
	string name;
	int salary;
	int id;
public:
	Employee() {
		this->name = "NO INFIRMATION";
		this-> salary = 0;
		 this -> id = 0;
	}
	Employee(string name, int salary) {  // constructorlar�m�z� birka�� kere tan�mlamam�z onlar� overloading yapm�� oluruz. 
		this->name = name;					// overloading yapmakdemek onlar� birden falza defa tan�mlamak anlm�na gelir.
		this->salary = salary;
		this->id = 0;
	}
	Employee(string name, int salary, int id) {				//constructor (yap�c� metod)
		this->name = name;
		this->salary = salary;
		this->id = id;

	}
	/*void setName(string isim) {
		name = isim;
	}
	void setSalary(int maas) {
		salary = maas;

	}

	string getName() {
		return name;
	}
	int getSalary() {
		return salary;
	}*/
	void showInfos() {
		cout << "isim: " << name << endl;
		cout << "maas: " << salary << endl;
		cout << "id: " << id << endl;
	}
};
int main() {
	Employee employee("emirhan", 5000, 1);
	Employee employee2("tugra", 4000);
	Employee employee3;
	employee.showInfos();
	employee2.showInfos();
	employee3.showInfos();

	return 0;
}