#include <iostream>
#include <fstream>	//ada tiga jenis ofstream,ifstream, fstream
					//				  output   input	gabungan
using namespace std;

int main(){

	ofstream myFile;


	//cara bikin file dengan cara menggunakan method .open(namafile,mode hasil)
	//ada tiga mode hasil
	//ios::out = default,operasi output;
	//ios::app = akan menambahkan ke akhir barisan (seperti append)
	//ios::trunc = default,sama seperti out

	myFile.open("Data1.txt",ios::out);
	//menggunakan myfile
	myFile<<"Haloo";
	//dan harus dituutup dengan method close()
	myFile.close();

	myFile.open("Data2.txt",ios::app);
	myFile<<"Lemah coy";
	myFile.close();

	myFile.open("Data3.txt",ios::trunc);
	myFile<<"Lemah coy";
	myFile.close();


	return 0;
}