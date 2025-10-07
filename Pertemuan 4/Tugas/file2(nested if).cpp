#include <iostream>
using namespace std;

int main(){
	
	string nama_siswa, hadiah1 = "hadiah Komputer Core i5.", hadiah2 = "Uang sebesar Rp. 2.500,000.", hadiah3 = "hadiah Hiburan.";
	int nilai1, nilai2, nilai3, nilai_rata2;
	
	cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
	cout << "Nama Siswa: ";
	cin >> nama_siswa;
	cout << "Nilai Pertandingan I: ";
	cin >> nilai1;
	cout << "Nilai Pertandingan II: ";
	cin >> nilai2;
	cout << "Nilai Pertandingan III: ";
	cin >> nilai3;
	
	nilai_rata2 = (nilai1 + nilai2 + nilai3) / 3;
	
	if (nilai_rata2 >= 70){
		if (nilai_rata2 >= 85){
			cout << "\nSiswa yang bernama " << nama_siswa << endl;
			cout << "Memperoleh nilai rata-rata " << nilai_rata2 << " dari hasil perlombaan yang diikutinya." << endl;
			cout << "Hadiah yang didapat adalah " << hadiah1;
		}else {
			cout << "\nSiswa yang bernama " << nama_siswa << endl;
			cout << "Memperoleh nilai rata-rata " << nilai_rata2 << " dari hasil perlombaan yang diikutinya." << endl;
			cout << "Hadiah yang didapat adalah " << hadiah2;	
		}
	}else {
		cout << "\nSiswa yang bernama " << nama_siswa << endl;
		cout << "Memperoleh nilai rata-rata " << nilai_rata2 << " dari hasil perlombaan yang diikutinya." << endl;
		cout << "Hadiah yang didapat adalah " << hadiah3;
	}
	
	getchar();
}
