#include <iostream>
using namespace std;

int main(){
	int a = 5;
	
	cout << "Nilai awal: " << a << endl;
	
	cout << "Pre-increment -> ++a = " << ++a << endl;
	
	cout << "Post-increment -> a++ = " << a++ << "\nSekarang: " << a << endl;
	
	cout << "\nPre-decrement -> --a = " << --a << endl;
	
	cout << "Post-decrement -> a-- = " << a-- << "\nSekarang: " << a << endl;
}
