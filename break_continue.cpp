#include<iostream>
using namespace std;


//break : döngüde break deyimi çalýþtýðý zaman döngü anýnda sona erer.
//continue: döngüde continue deyimi çalýþtýðý zaman döngü altýndaki  komutlarý çalýþtýrmadan baþa döner.
/*int main() {
	int i = 0;
	while (i < 10) {
		if (i == 5) {
			break;

		}
		cout << "i: " << i << endl;
		i++;
		return 0;
	} */
int main() {
	for (int i = 0; i < 10; i++) {
		if (i == 3 || i == 5) {
			continue;
		}
		cout << "i: " << i << endl;
	}
	/*int i = 0;
	while (i<10) {
		if (i == 3 || i == 5) {
			i++; //eðer bu satýr eklenmezse bu while döngüsü 3 rakamýnda takýlý kalacak ve ilerleyemeyecektir

			continue;
		}

		cout << "i: " << i << endl; 
		i++;
	}*/
/*int main(){
	string kullanici_adi = "emirhan";
	string parola = "12345";
	string username;
	string password;

	cout << "kullanici adi girin: ";
	cin >> username;
	cout << "parola giriniz: ";
	cin >> password;
	while (kullanici_adi!=username||parola!=password)
	{
		
		cout << "kullanici adi girin: ";
		cin >> username;
		cout << "parola giriniz: ";
		cin >> password;

		if (kullanici_adi == username && parola == password) {
			cout << "hosgeldiniz.";
			break;


		}
	}*/
	/*while (true) {
		cout << "kullanici adi girin: ";
		cin >> username;
		cout << "parola giriniz: ";
		cin >> password;

		if (username == kullanici_adi && password == parola) {
			cout << "hosgeldiniz";
			break;
		}
		else if (username != kullanici_adi && password == parola) {
			cout << "kullanici adi hatali"<<endl;
		}
		else if (username == kullanici_adi && password != parola) {
			cout << "parola hatali"<<endl;
		}
		else {
			cout << "kullanici adi ve parola hatali"<<endl;
		}
	}
	
*/

	
}









