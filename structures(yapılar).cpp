#include<iostream>
using namespace std;
struct Employee {
	int id;
	string name;
	string department;

};


int main() {

	//Employee emirhan = { 1,"emirhan","mechanical engineering" };
	Employee emirhan;
	emirhan.id = 1;
	emirhan.name = "emirhan";
	emirhan.department = "mechanical engineering";

	Employee tugra = { 2,"tugra","law" };
	
	cout << emirhan.name << endl;
	cout << tugra.id << endl;
	emirhan.name = "emirhan kekum";
	cout << emirhan.name << endl;

	return 0;

}