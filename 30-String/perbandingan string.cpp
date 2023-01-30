#include <iostream>
#include <string>

using namespace std;

int main(){

	//perbandingan string

	string inputan;
	string kata_kunci("iya");

	while(true){
		cout<<"Masukkan kata kunci = ";
		cin>>inputan;
		if (inputan==kata_kunci){
			cout<<"Kata kunci benar!"<<endl;
			break;
		}
		cout<<"Tebakan anda salah!"<<endl;
	}
	cout<<"Program Selesai!"<<endl;

	return 0;
}
