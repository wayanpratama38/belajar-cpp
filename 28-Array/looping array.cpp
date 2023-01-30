#include <iostream>
#include <array>

using namespace std;

int main(){



	/*
	cara deklarasinya adalah
	for(deklarasi variabel: array){
		statement
	}
	*/

	//
	array <int, 10>nilai = {0,1,2,3,4,5,6,7,8,9};

	for(int angka:nilai){
		cout<<angka<<endl;
	}

	cout<<endl;

	
	//memanipulasi array dengan referensi
	for(int &nilaiRef : nilai){
		nilaiRef *=2;
		cout<<nilaiRef<<endl;
	}





	return 0;
}
