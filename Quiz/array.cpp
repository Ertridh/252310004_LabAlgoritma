#include <iostream>
using namespace std;

int main(){
	
	int nilai_mahasiswa[5];
	int rata2, tertinggi, terendah;
	
	cout << "Masukkan 5 nilai mahasiswa!" << endl;
	for (int i = 0; i < 5; i++){
		cout << "Nilai ke-" << i+1 << ": ";
		cin >> nilai_mahasiswa[i];
	}
	
	tertinggi = nilai_mahasiswa[0];
	terendah = nilai_mahasiswa[0];
	
	for (int i = 1; i < 5; i++){
		if (nilai_mahasiswa[i] > tertinggi)
			tertinggi = nilai_mahasiswa[i];
		if (nilai_mahasiswa[i] < terendah)
			terendah = nilai_mahasiswa[i];
	}
	
	for (int i = 0; i < 5; i++){
		
	}
	
	cout << "\nNilai tertinggi = " << tertinggi << endl;
	cout << "Nilai terendah = " << terendah << endl;
	
	return 0;
}
