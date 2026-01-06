#include <iostream>
using namespace std;

struct {
	string nama;
	string jabatan;
	int gaji;
} pegawai;

int main(){
	
	cout << "Nama: ";
	cin >> pegawai.nama;
	
	cout << "Jabatan: ";
	cin >> pegawai.jabatan;
	
	cout << "Gaji: ";
	cin >> pegawai.gaji;
	
	cout << "\n";
	cout << "=== DATA PEGAWAI ===" << endl;
	cout << "Nama: " << pegawai.nama << endl;
	cout << "Jabatan: " << pegawai.jabatan << endl;
	cout << "Gaji: " << pegawai.gaji << endl;
	
	cout << "\n";
	cout << "UMR: 4.877.211" << endl;
	cout << "Apakah gaji pegawai tersebut diatas atau dibawah UMR?" << endl;
	cout << "\n";
	
	if(pegawai.gaji < 4877211){
		cout << "Gaji pegawai dibawah UMR";
	} else {
		cout << "Gaji pegawai diatas UMR";
	}
}
