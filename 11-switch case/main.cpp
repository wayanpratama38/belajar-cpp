#include <iostream>


using namespace std;

int main()
{
	int a;
	cout<<"masukan nilai a = ";
	cin>>a;

	/*
	switch(kondisi){
		case kondisi:
			aksi
		default:
			aksi
	}
	*/

	switch(a){
		case 1:
			cout<<"a = 1"<<endl;
		case 2:
			cout<<"a = 2"<<endl;
			break;
		case 3:
			cout<<"a = 3"<<endl;
		case 4:
			cout<<"a = 4"<<endl;
		case 5:
			cout<<"a = 5"<<endl;
		default:
			cout<<"ini default bang!"<<endl;
	}

	/*
	di dalam switch kita akan mengesekusi semua yang bernilai true dan jika semuanya tidak ada yang true maka akan mengeksekusikan default
	untuk memberhentikan ketika sebuah case sudah true maka gunakan control flow seperti break,continue atau pass

	*/

	cout<<"selesai!"<<endl;
	return 0;
}
