#include <iostream> // direktif preprocessor yang memungkinkan operasi standar input dan output
using namespace std; // agar tidak perlu menambahkan prefix std:: dalam perintah cout, cin, string, dan lain-lain

int main(){
	
	// inisialisasi variabel
	
	int x = 50; // memasukkan nilai 50 kedalam variabel x
	int a,b,c,d,e; 
	
	// proses
	
	a = x > 5 + 5; // memberikan statement di variabel a dan memproses variabel tersebut benar atau tidak
	b = x > 100; // memberikan statement di variabel b dan memproses variabel tersebut benar atau tidak
	c = a && b; // memberikan statement di variabel c dan memproses variabel tersebut benar atau tidak
	d = a || b; // memberikan statement di variabel d dan memproses variabel tersebut benar atau tidak
	e = !(c); // memberikan statement di variabel e dan memproses variabel tersebut benar atau tidak
	
	// output berupa 1 (benar) dan 0 (salah)
	
	cout <<"\nNilai a = x > 5 + 5 = " << a << endl; // menampilkan output  nilai a
	cout <<"\nNilai b = x > 100 = " << b << endl; // menampilkan output nilai b
	cout <<"\nNilai c = a && b = " << c << endl; // menampilkan output nilai c  
	cout <<"\nNilai d = a || b = " << d << endl; // menampilkan output nilai d
	cout <<"\nNilai e = !(c) = " << e << endl; // menampilkan output nilai e
	
	getchar(); // fungsi yang hanya mengambil satu karakter dari suatu input. getchar() digunakan di baris ini agar tidak terdapat kalimat di akhir proses 
 }
