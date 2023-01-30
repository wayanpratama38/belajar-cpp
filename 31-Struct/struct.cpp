#include <iostream>
#include <string>

using namespace std;

//struct sama seperti class
// cara deklarasinya adalah
// struct namastruct{
//		method	
//	}


struct kendaraan
{
	int jumlahban;
	int nomor_plat;
	int berat_max;
};

int main(){

	kendaraan motor;
	kendaraan mobil;

	motor.jumlahban = 2;
	motor.nomor_plat = 32145;
	motor.berat_max=150;

	mobil.jumlahban = 4;
	mobil.nomor_plat = 32223;
	mobil.berat_max=300;

	cout<<" MOTOR "<<endl;
	cout<<"-"<<motor.jumlahban<<"-"<<endl;
	cout<<"-"<<motor.nomor_plat<<"-"<<endl;
	cout<<"-"<<motor.berat_max<<"-"<<endl;

	cout<<endl;

	cout<<" MOBIL "<<endl;
	cout<<"-"<<mobil.jumlahban<<"-"<<endl;
	cout<<"-"<<mobil.nomor_plat<<"-"<<endl;
	cout<<"-"<<mobil.berat_max<<"-"<<endl;






	return 0;
}