#include <iostream>
#include <string>


using namespace std;
//pada string ini kita menggunakan standard library string
int main(){

	//cara membuat nya 
	// string nama_string("input")
	string kata("Kuceang");
	cout<<kata<<endl;


	//string ini hanya berfungsi untuk kata, jika ternyata ada sebuah spasi
	//maka hanya kata sebelum spasi yang tersimpan 
	string tebak;
	cout<<"Masukkan kata :";
	cin>>tebak;
	cout<<"kata yang dimasukkan adalah = "<<tebak<<endl;


	return 0;
}
