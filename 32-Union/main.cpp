#include <iostream>
#include <string>
using namespace std;

//union ini bisa berisi banyak tipe data dan semuanya terhubung
//sehingga jika salah satu dirubah maka yang lain ikut terpengaruhi

union nama{
	int int_value;
	char char_value[4];
};


int main(){

	nama identitas;

	//hasil dari char value akan terpengaruh:
	identitas.int_value = 203151251;
	cout<<"Int value = "<<identitas.int_value<<endl;
	cout<<"Char value = "<<identitas.char_value<<endl;

	cout<<endl;

	//karena sudah di assgin nilai ke array ini
	//jadi mempengaruhi nilai dari int_value
	identitas.int_value = 203151251;
	identitas.char_value[0] = 'b';
	identitas.char_value[1] = 'u';
	identitas.char_value[2] = 'd';
	identitas.char_value[3] = 'i';
	cout<<"Int value = "<<identitas.int_value<<endl;
	cout<<"Char value = "<<identitas.char_value<<endl;








	return 0;
}
