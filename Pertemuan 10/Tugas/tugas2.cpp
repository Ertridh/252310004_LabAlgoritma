#include <iostream>
#include <string>
using namespace std;

float konversiSuhu(char jenis, char konversi, float suhu){
	float hasil;
	
	// Celcius to Kelvin	
	if(jenis == 'C' && konversi == 'K' || jenis == 'c' && konversi == 'k'){
		hasil = suhu + 273.15;
		cout << "Hasil konversi: " << hasil;
	// Kelvin to Celcius
	}else if(jenis == 'K' && konversi == 'C' || jenis == 'k' && konversi == 'c'){
		hasil = suhu - 273.15;
		cout << "Hasil konversi: " << hasil;
	// Fahrenheit to Celcius	
	}else if(jenis == 'F' && konversi == 'C' || jenis == 'f' && konversi == 'c'){
		hasil = (suhu-32)*5/9;
		cout << "Hasil konversi: " << hasil;
	// Celcius to Fahrenheit
	}else if(jenis == 'C' && konversi == 'F' || jenis == 'c' && konversi == 'f'){
		hasil = (suhu*1.8)+32;
		cout << "Hasil konversi: " << hasil;
	// Fahrenheit to Kelvin	
	}else if(jenis == 'F' && konversi == 'K' || jenis == 'f' && konversi == 'k'){
		hasil = (suhu - 32)*5/9+273.15;
		cout << "Hasil konversi: " << hasil;
	// Kelvin to Fahrenheit
	}else if(jenis == 'K' && konversi == 'F' || jenis == 'k' && konversi == 'f'){
		hasil = (suhu - 273.15)*9/5+32;
		cout << "Hasil konversi: " << hasil;
	}else {
		cout << "Error!";
	}
} 

int main(){
	char a, b;
	float c;
	
	cout << "Jenis suhu (C/F/K): ";
	cin >> a;
	
	cout << "Angka suhu: ";
	cin >> c;
	
	cout << "Konversi suhu (C/F/K): ";
	cin >> b;
	
	konversiSuhu(a, b, c);
	return 0;
}
