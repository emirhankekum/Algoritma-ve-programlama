#include<iostream>
using namespace std;


//break : d�ng�de break deyimi �al��t��� zaman d�ng� an�nda sona erer.
//continue: d�ng�de continue deyimi �al��t��� zaman d�ng� alt�ndaki  komutlar� �al��t�rmadan ba�a d�ner.
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
			i++; //e�er bu sat�r eklenmezse bu while d�ng�s� 3 rakam�nda tak�l� kalacak ve ilerleyemeyecektir

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









