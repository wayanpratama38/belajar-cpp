#include <iostream>
#include <string>
using namespace std;

int main(){

	//membuat string kalimat
	string kalimat1("Aku senang bermain-main di rumah");
	string kalimat2("Dia senang makan manisan");

	//consol out kalimat
	cout<<"Kalimat 1 : "<<kalimat1<<endl;
	cout<<"Kalimat 2 : "<<kalimat2<<endl;
	cout<<endl;
	//substring,mengambil string di tengah-tengah suatu kalimat
	//caranya:
	//substr(index,panjang kata)
	cout<<kalimat1.substr(11,12)<<endl;
	cout<<kalimat2.substr(11,5)<<endl;
	cout<<endl;

	//mencari index dari suatu kata di dalam kalimat
	// menggunakan method find(string yang dicari)
	// ini akan menghasilkan int sehingga bisa disimpan kedalam variabel
	
	cout<<"Terdapat pada index : "<<kalimat1.find("senang")<<endl;
	cout<<"Terdapat pada index : "<<kalimat2.find("manisan")<<endl;
	cout<<endl;

	int a=kalimat1.find("ma");
	cout<<a<<endl;
	//jika ingin mencari huruf yang sama di selanjutnya maka
	//gunakan find(string yang dicari,variabel penyimpan +1);
	cout<<kalimat1.find("ma",a+1)<<endl;
	cout<<endl;
	//jika ingin mengecek dari belakang maka gunakan -> rfind()
	cout<<kalimat2.find("ma")<<endl;


	return 0;
}
