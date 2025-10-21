#include <iostream>
#include <cstdlib>
using namespace std;

/* Program dengan pernyataan goto */
int main(){
	
	int a, b;
	char lagi;
	
	mulai:
		system("cls");
		cout << "Masukkan Bilangan = ";
		cin >> a;
		b = a % 2;
		cout << "Nilai "<< a << " %" << " 2" << " adalah " << b << endl;
		
		cout << "\nIngin Hitung Lagi? (y/t): ";
		cin >> lagi;
		
		if(lagi == 'y' || lagi == 'Y'){
			goto mulai;
		}
		if(lagi == 't' || lagi == 'T'){
			goto selesai;
		}
	
	selesai:
	
		return 0;
}
