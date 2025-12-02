#include <iostream>
using namespace std;

int main(){
	int i, j, harga[10], jumlahJenis, jumlahPotong[10], total = 0;
	char jenisPotong[10];
	
	cout << "GEROBAK  FRIED  CHICKEN" << endl;
	cout << "-----------------------" << endl;
	cout << "Kode    Jenis     Harga" << endl;
	cout << "-------------------------" << endl;
	cout << " D " << "\t" << "Dada" << "\t" << "Rp. " << 2500 << endl;
	cout << " P " << "\t" << "Paha" << "\t" << "Rp. " << 2000 << endl;
	cout << " S " << "\t" << "Sayap" << "\t" << "Rp. " << 1500 << endl;
	
	cout << "\nBanyak jenis : ";
	cin >> jumlahJenis;
	
	for(i = 1; i <= jumlahJenis; i++){
		cout << "\nJenis Ke = " << i << endl;
		cout << "Jenis Potong [D/P/S] : ";
		cin >> jenisPotong[i];
		cout << "Banyak Potong : ";
		cin >> jumlahPotong[i];
		
		if(jenisPotong[i] == 'D' || jenisPotong[i] == 'd')
			harga[i] = 2500;
		else if(jenisPotong[i] == 'P' || jenisPotong[i] == 'p')
			harga[i] = 2000;
		else if(jenisPotong[i] == 'S' || jenisPotong[i] == 's')
			harga[i] = 1500;
		else {
			harga[i] = 0;
			cout << "Kode tidak valid! harga = 0\n";
		}
		
		total += harga[i] * jumlahPotong[i];
	}
	
	int pajak = total * 0.1;
	
	
	cout <<"\t     GEROBAK FRIED CHICKEN \n";
    cout <<"---------------------------------------------------\n";
    cout <<"No\tJenis\tHarga\tBanyak\tTotal\n";
    cout <<"---------------------------------------------------\n"; 
	
	for(j=1; j <= jumlahJenis; j++){
        cout << j << "\t" << jenisPotong[j] << "\t"  << harga[j] << "\t" << jumlahPotong[j] << "\t" << harga[j] * jumlahPotong[j] << endl;
    }
    
	cout <<"---------------------------------------------------\n";
    cout <<"\t\tTotal Harga    : " << total << endl;
    cout <<"\t\tPajak (10%)    : " << pajak << endl;
    cout <<"\t\tTotal Bayar    : " << total + pajak << endl;
    cout <<"===================================================\n";

    return 0;
}
