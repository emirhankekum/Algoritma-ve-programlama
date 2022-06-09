#include"employee.h"


int main() {
	Employee employee1;
	Employee employee2;
	Employee employee3;
	employee1.id = 1;
	employee1.name = "emirhan ";
	employee1.salary = 5000;

	employee2.id = 2;
	employee2.name = "tugra ";
	employee2.salary = 7000;
	
	employee3.id = 3;
	employee3.name = "mehmet ";
	employee3.salary = 4500;
	employee1.showInfos();
	employee2.showInfos();
	employee3.showInfos();
	return 0;
}