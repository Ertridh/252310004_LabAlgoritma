#include <iostream>
using namespace std;

int main(){
	float pi = 3.14, r;
	
	cout << "Menghitung Luas Lingkaran" << endl;
	cout << "\nMasukkan jari-jari: ";
	cin >> r;
	
	cout << "Luas lingkaran: pi x r x r" << endl;
	cout << "pi = " << pi << endl;
	cout << "r = " << r << endl;
	cout << pi << " x " << r << " x " << r << endl;
	cout << "\n";
	cout << "Hasil: " << pi * r * r;
}
