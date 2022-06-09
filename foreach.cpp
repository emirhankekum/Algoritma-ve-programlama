#include<iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 };
	for (int item : a) {
		cout << item << endl;
		cout << 2*item << endl; // matematiksel iþlem de yaptýrabiliriz. 
	} 

	return 0;
}