#include<iostream>
using namespace std;
struct address {
	string cityName;  
	int no;
};

struct Employee {
	int id;
	string name;
	string department;
	address address;
	
	/*struct address {
		string cityName;  HATALI KULLANIM
		int no;
	};*/
};


int main() {

	Employee employee = { 1,"emirhan","mechanical",{"istanbul",23} };
	cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.department << endl;
	cout << employee.address.cityName << endl;
	cout << employee.address.no << endl;

	
	return 0;
}