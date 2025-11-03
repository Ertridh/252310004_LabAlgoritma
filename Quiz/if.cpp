#include <iostream>
using namespace std;

int main(){
	
	int i, j=0;
	
	for(i = 0; i <= 20; i++){
		if(i % 2 != 0){
			cout << i << " ";
			j = j + i;
		}
	}
	cout << "\nHasil: " << j;
}
