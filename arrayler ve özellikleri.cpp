#include<iostream>
using namespace std;

int main() {
	/*int array[3]; 
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;
	int array1[6] = {10,20,30,40,50,60};
	cout << array1[0] << endl;
	cout << array1[1] << endl;
	cout << array1[2] << endl; */
	
	string word[4];
	for (int i = 0; i < 4; i++) {
		cout << "kelime gir:" << endl;
		cin >> word[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cout << word[i] << endl;
	}


	return 0;
}