#include<iostream>
using namespace std;
struct student {
	int id;
	char letter;
};
int main() {
	cout<<"intager" << sizeof(int) << endl;
	cout << "float" << sizeof(float) << endl;
	cout << "double" << sizeof(double) << endl;
	cout << "string" << sizeof(string) << endl;
	cout << "char" << sizeof(char) << endl;
	cout << "bool" << sizeof(bool) << endl;
	cout << "struct" << sizeof(student) << endl;

	return 0;
}