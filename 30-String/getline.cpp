#include <iostream>
#include <string>

using namespace std;

int main(){

	string kalimat_input;

	//getline(cin,variabel)
	//berguna untuk mendapatkan input kalimat yang banyak
	cout<<"Masukkan kalimat : ";
	getline(cin,kalimat_input);
	cout<<kalimat_input<<endl;

	//menghitung jumlah kata
	int jumlah = 0;
	int posisi = 0;

	while(true){
		posisi = kalimat_input.find(" ",posisi+1);
		jumlah++;
		if(posisi<0){
			break;
		}
	}
	cout<<"Jumlah katanya ada = "<<jumlah<<endl;

	return 0;
}
