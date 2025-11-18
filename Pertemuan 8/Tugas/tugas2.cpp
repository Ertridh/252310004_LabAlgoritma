#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char karakter[100] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
	
	cout << karakter << endl;
	cout << "\nKebalikan dari kalimat tersebut adalah: " << strrev(karakter);
	cout << "\n\nMerubah ke huruf kecil = " << strlwr(karakter);
	
	getchar();
}
