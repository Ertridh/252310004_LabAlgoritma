#include <iostream>
using namespace std;

int main(){
	string dataMahasiswa[4][1] = {
		{"NAMA     NPM"},
		{"Helena   232310001"},
		{"Joshua   232310002"},
		{"Antoni   242310001"},
	};
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; i < 1; j++){
			cout << dataMahasiswa[i][j] << endl;
		}
	}
}
