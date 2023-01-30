#include <iostream>


using namespace std;

int main()
{
	float a,b;
	char aritmatika;
	float hasil;

	cout<<"Selamat datang di program kalkulator!\n \n"<<endl;

	// memasukkkan input dari user
	cout<<"Masukkan nilai pertama: ";
	cin>>a;
	cout<<"Masukkan nilai kedua: ";
	cin>>b;
	cout<<"Pilih operator (+, -, x, /) : ";
	cin>>aritmatika;

	//menentukan operator
	switch(aritmatika){
		case '+':
			hasil=a+b;
			break;
		case '-':
			hasil=a-b;
			break;
		case '*':
			hasil=a*b;
			break;
		case '/':
			hasil=a/b;
			break;
	}

	cout<<"Hasilnya "<<hasil<<" selesai!"<<endl;

	return 0;
}
