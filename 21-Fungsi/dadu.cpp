#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	char lanjut;
	while(true){
		cout<<"Apakah mau melempar dadu? (y/n) ";
		cin>>lanjut;

		if(lanjut == 'y'){
			cout<<1+(rand()%6)<<endl;
		}else if(lanjut == 'n'){
			cout<<"Terimakasih sudah bermain <3"<<endl;
			break;
		}else{
			cout<<"Masukkan lagi y atau n !!"<<endl;
		}
	}

	return 0;
}