#include <iostream>
using namespace std;

int faktorial(int n) {
	int hasil = 1;
	for(int i = n; i >= 1; i--){
		hasil = hasil * i;
	}
	
	return hasil;
}

int main(){
	int a, b;
	cout << "Masukkan angka: ";
	cin >> a;
	
	cout << faktorial(a);
}
