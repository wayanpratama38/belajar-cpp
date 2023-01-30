#include <iostream>

using namespace std;

// Fungsi Luas
double fungsi_luas(double p,double l){
	double hasil = p*l;
	return hasil;
}

double fungsi_keliling(double p,double l){
	double hasil = 2*(p+l);
	return hasil;
}

void tampilkan_hasil(double p, double l){
	cout<<"Hasil Luas: ";
	cout<<fungsi_luas(p,l)<<endl;
	cout<<"Hasil Keliling: ";
	cout<<fungsi_keliling(p,l)<<endl;
}

int main(){
	double panjang,lebar;
	cout<<"Masukkan panjang : ";
	cin>>panjang;
	cout<<"Masukkan lebar : ";
	cin>>lebar;

	tampilkan_hasil(panjang,lebar);

	return 0;
}