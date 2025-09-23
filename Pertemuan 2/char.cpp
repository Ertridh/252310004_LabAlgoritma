#include <iostream>
using namespace std;

int main(){
	string y; char z[25]; char x[40];
	
	cout << "Masukkan NPM anda: ";
	cin >> x;
	cin.ignore();
	cout << "Masukkan Nama anda: ";
	getline(cin, y);
	cout << "Masukkan Alamat anda: ";
	cin >> z;
	
	cout << "\nNPM anda adalah: " << x;
	cout << "\nNama anda adalah: " << y;
	cout << "\nAlamat anda adalah: " << z;
	
	return 0;
}
