#include <iostream>

using namespace std;

/*
struktur untuk membuat fungsi adalaah;
tipedata - namafungsi - (argument) {
	aksi;
	return aksi;
}

fungsi void;

void - namafungsi - (argument){
	aksi;
}
*/ 


int tambah(int a,int b){
	int c;
	c = a+b;
	return c;
}

int kuadrat(int x){
	int y;
	y = x*x;
	return y;
}

void tampilkan(int k){
	cout<<"MENAMPILKAN FUNGSI VOID\n";
	cout<<k<<endl;
}


int main(){

	int angka1,hasil1,a,b,hasil2;
	cout<<"Masukkan angka yang ingin dikuadratkan : ";
	cin>>angka1;
	hasil1 = kuadrat(angka1);
	cout<<"Hasilnya adalah "<<hasil1<<endl;

	cout<<"Masukkan angka 1 = ";
	cin >> a;
	cout<<"Masukkan angka 2 = ";
	cin >> b;
	hasil2 = tambah(a,b);
	cout<<"Hasil tambhnya adalah ";
	tampilkan(hasil2);




	return 0;
}