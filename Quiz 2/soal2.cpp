#include <iostream>
using namespace std;

int validasi(int *b){
	cout << "Nilai sebelum validasi: " << *b << endl;
	
	if (*b < 0){
		cout << "Nilai setelah validasi: " << 0;
	} else if (*b > 100){
		cout << "Nilai setelah validasi: " << 100;
	} else {
		cout << "Nilai setelah validasi: " << *b;
	}
}

int main(){
	int a;
	
	cout << "Masukkan angka: ";
	cin >> a;
	
	validasi(&a);
}
