#include <iostream>
#include <string>

using namespace std;

struct aktor{
	string nama;
	int tahun_lahir;
};

struct film{
	string judul;
	string genre;
	int tahun_terbit;
	aktor pemeran_1;
	aktor pemeran_2;
};

int main(){

	aktor orang_1, orang_2;
	film pilem1;

	//aktor 1
	orang_1.nama="Udin Pepeng";
	orang_1.tahun_lahir=1980;

	//aktor 2
	orang_2.nama="Budi Proplayer";
	orang_2.tahun_lahir=1990;


	//film
	pilem1.judul = "Player Wan!";
	pilem1.genre = "Game";
	pilem1.tahun_terbit=2012;
	pilem1.pemeran_1 = orang_1;
	pilem1.pemeran_2 = orang_2;


	//cara print seperti class biasa;
	cout<<"Judul film : "<<pilem1.judul<<endl;
	cout<<"Genre film : "<<pilem1.genre<<endl;
	cout<<"Tahun film : "<<pilem1.tahun_terbit<<endl;
	cout<<"Nama aktor 1 : "<<pilem1.pemeran_1.nama<<endl;
	cout<<"Tahun lahir aktor 1 : "<<pilem1.pemeran_1.tahun_lahir<<endl;
	cout<<"Nama aktor 2 : "<<pilem1.pemeran_2.nama<<endl;
	cout<<"Tahun Lahir Aktor 2: "<<pilem1.pemeran_2.tahun_lahir<<endl;

	return 0;
}
