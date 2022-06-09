#include<iostream>
using namespace std;

class Employee {
private:
	string name;
	int salary;
	int id;
public:
	
	Employee(string isim, int maas,int kimlik) {				//constructor (yapýcý metod)
		name = isim;
		salary = maas;
		id = kimlik;

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
		cout <<"maas: " << salary << endl;
		cout << "id: " << id << endl;
	}
};
int main() {
	Employee employee("emirhan",5000,1);
	employee.showInfos();
	return 0;
}