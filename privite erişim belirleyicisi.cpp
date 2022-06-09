#include<iostream>
using namespace std;

class Employee {
private:
	string name;
	int age;
public:
	void setName(string isim) {
		name = isim;
	}
	void setAge(int yas) {
		age = yas;
	}
	string getName() {
		return name;
	}
	int getAge(){
		return age;
	}
		
};
int main() {
	Employee employee1;
	employee1.setName("emirhan");
	employee1.setAge(20);
	cout << employee1.getName() << endl; 
	cout << employee1.getAge() << endl;
	return 0;
}