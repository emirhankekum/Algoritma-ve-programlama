#include<iostream>
using namespace std;

class Student {
public:
	string name;
	void tellName() {
		cout << "benim adim " << name << endl;

	}


};

int main() {
	Student student1;
	Student student2;
	student1.name = "emirhan";
	student2.name = "tugra";
	student1.tellName();
	student2.tellName();




	return 0;
}