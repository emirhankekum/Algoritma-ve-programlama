#include <iostream>
using namespace std;

int main() {
	string password = "benmalim123";
	string input_password;
	cout << "parola giriniz: ";
	cin >> input_password;

	if (password == input_password) {
		cout << "parola dogru";
	
	}
	else {
		cout << "parola yanlis";
		
	}





	return 0;

	
}