#include <iostream>

using namespace std;

int main(){

	int input_user;
	cout<<"Selamat datang di program pembuatan segitiga sama kaki!\n";
	cout<<"Masukkan tinggi segitiganya : ";
	cin>>input_user;
 
	for (int tinggi=1;tinggi<=input_user;tinggi++){
		for(int spasi=1;spasi<tinggi;spasi++){
			cout<<" ";
		}
		for(int bintang=input_user;(bintang>=(2*tinggi-input_user));bintang--){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}