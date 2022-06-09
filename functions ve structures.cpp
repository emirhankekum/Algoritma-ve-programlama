#include<iostream>
using namespace std;
struct Employee {
	int id;
	string name;
	string department;

};
void show(Employee*employee) {
	employee->id = 30;
	cout << "id: " << employee->id << endl;
	cout << "name: " << employee->name << endl;
	cout << "department: " << employee->department << endl;

}


void showEmployee(Employee employee) {
	employee.id = 30;
	cout << "id: "<<employee.id << endl;
	cout << "name: "<<employee.name << endl;
	cout << "department: "<<employee.department << endl;
}

int main() {

	Employee emirhan = { 1,"emirhan","mechanical engineering" };
	Employee tugra = { 2,"tugra","law" };
	showEmployee(emirhan);
	show(&tugra);
	cout<<"emirhan id " << emirhan.id << endl;
	cout << "tugra id " << tugra.id << endl;
	return 0;
}