#include <iostream>
using namespace std;

int main(){
	
	int angka, nama;
	
	cout << "Masukkan angka: ";
	cin >> angka;
	cout << "Masukkan nama: ";
	cin >> nama;
	
	if (angka % 2 == 0){
		cout << "Angka adalah bilangan genap";
	}else {
		cout << "Angka adalah bilangan ganjil";
	}
	
	return 0;
}
