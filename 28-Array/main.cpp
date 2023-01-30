#include <iostream>

using namespace std;

int main(){
	// cara deklarasi array
	int nilai[5]={1,2,3,4,5};
	nilai[0]=1;
	nilai[1]=2;
	nilai[2]=3;
	nilai[3]=4;
	nilai[4]=5;

	//cara akses sama kayak di python

	cout<<"nilai ke 1 : "<<nilai[0]<<endl;
	cout<<"nilai ke 2 : "<<nilai[1]<<endl;
	cout<<"nilai ke 3 : "<<nilai[2]<<endl;
	cout<<"nilai ke 4 : "<<nilai[3]<<endl;
	cout<<"nilai ke 5 : "<<nilai[4]<<endl;

	//disini tidak ada built in library yang dapat mengetahui 
	//ukuran dari array sehingga digunakan cara sebagai berikut
	cout<<endl;
	cout<<"ukuran array = "<<sizeof(nilai)<<endl;
	cout<<"jumlah anggota array = "<<sizeof(nilai)/sizeof(int)<<endl;

	return 0;
}