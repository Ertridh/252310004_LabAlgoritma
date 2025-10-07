#include <iostream>
using namespace std;

int main(){
	char kode;
	
	cout << "Masukkan Kode Barang [A/B/C] : ";
	cin >> kode;
	
	switch(kode){
		case 'A':
			cout << "Alat Olahraga";
			break;
		case 'a':
			cout << "Alat Olahraga";
			break;
		case 'B':
			cout << "Alat Elektronik";
			break;
		case 'b':
			cout << "Alat Elektronik";
			break;
		case 'C':
			cout << "Alat Masak";
			break;
		case 'c':
			cout << "Alat Masak";
			break;
		default:
			cout << "Anda Salah Memasukkan kode";
			break;
	}
	
	getchar();
}
