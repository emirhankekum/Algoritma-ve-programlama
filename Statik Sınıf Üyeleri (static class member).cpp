#include<iostream>
using namespace std;
class Gamer {
public:
	static int gamers;
	Gamer() {
		gamers++;
		cout << "yeni oyuncu olusturuldu." << endl;
		cout << "kayitli toplam oyuncu sayisi: " << gamers << endl;

	}
};
int Gamer::gamers = 0;

int main() {
	Gamer gamer1;
	Gamer gamer2;
	Gamer gamer3;
	Gamer gamer4;



	return 0;
}