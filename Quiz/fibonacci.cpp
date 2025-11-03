#include <iostream>
using namespace std;

int main(){
	
	int i, a = 0, b = 0, c = 0;
	
	cout << "Masukkan jumlah suku Fibonacci: ";
	cin >> i;
	
	while(c <= i){
		if(c != 0){
			c = a + b;
		}else {
			c = 1;
		}
		
		a = b;
		b = c;
		cout << c << " ";
	}
	
	getchar();
}
