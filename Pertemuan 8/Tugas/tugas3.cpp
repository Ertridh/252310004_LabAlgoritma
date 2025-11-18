#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char kalimat1[20] = "Teknik";
	char kalimat2[20] = "Informatika";
	
	cout << "Kalimat 1 = " << kalimat1 << endl;
	cout << "Kalimat 2 = " << kalimat2 << endl;;
	
	cout << "\nHasil penggabungan = " << strcat(kalimat1, kalimat2);
	
	getchar();
}
