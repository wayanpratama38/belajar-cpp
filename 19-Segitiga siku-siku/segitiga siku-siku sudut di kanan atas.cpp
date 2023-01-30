#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int input_user;


	cout<<"Selamat datang di program segitiga siku-siku!\n";
	cout<<"Masukkan tinggi segitiga = ";
	cin>>input_user;

	cout<<"Pola 3\n"<<endl;
	for(int tinggi=1;tinggi<=input_user;tinggi++){
		for(int spasi=1;spasi<tinggi;spasi++){
			cout<<" ";
		}
		for(int bintang=input_user;bintang>=tinggi;bintang--){
			cout<<"*";
		}cout<<endl;
	}
	return 0;
}