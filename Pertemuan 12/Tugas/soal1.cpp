#include <iostream>
using namespace std;

struct {
	int nilai_tugas, nilai_praktikum, nilai_uts, nilai_uas;
} mahasiswa;

int main(){
	
	int nilaiRata2;
	
	cout << "=== MENGHITUNG NILAI RATA-RATA MAHASISWA ===" << endl;
	
	cout << "\nMasukkan nilai tugas: ";
	cin >> mahasiswa.nilai_tugas;
	
	cout << "Masukkan nilai praktikum: ";
	cin >> mahasiswa.nilai_praktikum;
	
	cout << "Masukkan nilai UTS: ";
	cin >> mahasiswa.nilai_uts;
	
	cout << "Masukkan nilai UAS: ";
	cin >> mahasiswa.nilai_uas;
	
	nilaiRata2 = (mahasiswa.nilai_tugas + mahasiswa.nilai_praktikum + mahasiswa.nilai_uts + mahasiswa.nilai_uas) / 4;
	
	cout << "\nNilai rata-rata: " << nilaiRata2; 
	
	if(nilaiRata2 >= 90){
		cout << "\nNilai: A";
	}else if(nilaiRata2 >= 80){
		cout << "\nNilai: B";
	}else if(nilaiRata2 >= 70){
		cout << "\nNilai: C";
	}else if(nilaiRata2 >= 60){
		cout << "\nNilai: D";
	}else {
		cout << "\nNilai: E";
	}
}
