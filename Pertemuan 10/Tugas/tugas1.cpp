#include <iostream>
#include <string>
using namespace std;

void jumlahKarakter(string kalimat, char karakter){
	int n = 0;
	
	cout << "\nKalimat: " << kalimat << endl;
	
	for(int i=0; i < kalimat.length(); i++){
		if(kalimat[i] == karakter){
			n++;
		}
	}
	
	cout << "Jumlah Karakter: " << n;
}

int main(){
	string a;
	char b;
	
	cout << "Masukkan kalimat: ";
	cin >> a;
	
	cout << "Karakter yang ingin dihitung: ";
	cin >> b;
	
	jumlahKarakter(a, b);
	return 0;
}
