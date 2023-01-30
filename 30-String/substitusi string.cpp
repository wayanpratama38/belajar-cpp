#include <iostream>
#include <string>

using namespace std;

int main(){

	string kalimat_1("Bila waktu telah berhenti");
	string kalimat_2("Ehe te nandayo!");
	cout<<"Kalimat 1 : "<<kalimat_1<<endl;
	cout<<"Kalimat 2 : "<<kalimat_2<<endl;
	cout<<endl;


	//swap
	//menggunakan method swap
	kalimat_1.swap(kalimat_2);
	cout<<"KALIMAT SETELAH DI SWAP"<<endl;
	cout<<"Kalimat 1 : "<<kalimat_1<<endl;
	cout<<"Kalimat 2 : "<<kalimat_2<<endl;
	cout<<endl;

	//replace
	//menggunakan replace(awal index,panjang kata,string pengganti)
	kalimat_2.replace(kalimat_2.find("berhenti"),8,"habis");
	cout<<"REPLACE KATA"<<endl;
	cout<<"Kalimat 1 : "<<kalimat_1<<endl;
	cout<<"Kalimat 2 : "<<kalimat_2<<endl;
	cout<<endl;

	//insert, memasukkan kata
	// gunakan insert(index yang ingin ditambahkan kata/kalimat,string yang ingin di tambahkan)
	kalimat_1.insert(14," bakaa");
	cout<<"INSERT KATA"<<endl;
	cout<<"Kalimat 1 : "<<kalimat_1<<endl;
	cout<<"Kalimat 2 : "<<kalimat_2<<endl;





	return 0;
}