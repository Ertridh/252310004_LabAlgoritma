#include <iostream>
using namespace std;

int main(){
	float pi = 3.14, r, t;
	
	cout << "Menghitung Volume Tabung" << endl;
	cout << "\nMasukkan jari-jari: ";
	cin >> r;
	cout << "Masukkan tinggi: ";
	cin >> t;
	
	cout << "Volume tabung: pi x r x r x t" << endl;
	cout << "pi = " << pi << endl;
	cout << "r = " << r << endl;
	cout << "t = " << t << endl;
	cout << pi << " x " << r << " x " << r << " x " << t << endl;
	cout << "\n";
	cout << "Hasil: " << pi * r * r * t;
}
