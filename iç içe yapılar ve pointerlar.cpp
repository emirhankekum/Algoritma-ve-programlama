#include<iostream>
using namespace std;
struct Address {
	string cityName;
	int no;
};

struct Employee {
	int id;
	string name;
	string department;
	Address* adres;

	
};
int main() {
	Employee employee;
	employee.id = 1;
	employee.name = "emirhan";
	employee.department = "mechanical";
	Address address = { "istanbul",23 };
	employee.adres = &address;

	Employee* ptr = &employee;
	cout << ptr->adres->cityName << endl;




	return 0;
}