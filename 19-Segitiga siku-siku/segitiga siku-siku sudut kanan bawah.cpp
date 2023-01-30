#include <iostream>

using namespace std;


int main(){
	
	int inputan_user;
	cout<<"Selamat datang di program segitiga siku-siku!\n";
	cout<<"Masukkan tinggi segitiga = ";
	cin>> inputan_user;

	cout<<"Pola 4"<<endl;
	for(int tinggi=1;tinggi<= inputan_user;tinggi++){
		for(int spasi= inputan_user;spasi>tinggi;spasi--){
			cout<<" ";
		}
		for(int bintang=tinggi;bintang>=1;bintang--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}