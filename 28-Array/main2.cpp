#include <iostream>
#include <array>

using namespace std;

int main(){

	//cara deklarasi yang baru dengan
	// array <tipe data, jumlah> nama array;
	array <int,10> urutan;

	for(int i=0;i<10;i++){
		urutan[i]=i;
		cout<<"Nilai dari ["<<i<<"] = "<<urutan[i]<<endl;
	}

	cout<<endl;
	//beberapa method yang bisa digunakan
	//untuk mencari jumlah anggota array
	cout<<urutan.size()<<endl;
	//untuk mencari nilai di urutan tertentu
	cout<<"Nilai dari urutan ke 3 adalah "<<urutan.at(3)<<endl;
	
	
	return 0;
}
