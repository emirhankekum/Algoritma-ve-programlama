#include<iostream>
using namespace std;
class Employee {
private:
	string name;
	int age;
	int salary;
public:
	Employee(string name,int age, int salary) {
		this->name = name;
		this->age = age;
		this->salary = salary;
	}
	//friend void showInfos(Employee employe);
	friend class Test;
};
class Test {
public:
	static void showInfos(Employee employe) {
		cout << employe.name << " " << employe.age << " " << employe.salary << endl;
};

/* void showInfos(Employee employe) {
	cout << employe.name << " " << employe.age << " " << employe.salary << endl;
}*/


int main() {
	Employee employee("emirhan", 20, 10000);
	Test::showInfos(employee);
	



	return 0;
}