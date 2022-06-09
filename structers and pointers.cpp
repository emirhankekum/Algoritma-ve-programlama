#include<iostream>
using namespace std;
struct Employee {
	int id;
	string name;
	string department;

};


int main() {

	Employee emirhan = { 1,"emirhan","mechanical engineering" };
	Employee tugra = { 2,"tugra","law" };
	Employee* ptr = &emirhan;

	cout << ptr->department << endl;
	cout << emirhan.name << endl;
	//cout << tugra.id << endl;
	

	return 0;

}