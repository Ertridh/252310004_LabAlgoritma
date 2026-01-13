#include <iostream>
using namespace std;

struct Buku {
	string nama;
	string pengarang;
};	

int main(){
	Buku buku;
	
	cout << "Nama buku: ";
	getline(cin, buku.nama);
	cout <<"Pengarang buku: ";
	getline(cin, buku.pengarang);
	
	cout << "\nData Buku" << endl;
	cout << "Nama buku: " << buku.nama << endl;
	cout << "Pengarang buku: " << buku.pengarang;
	
	return 0;
}
