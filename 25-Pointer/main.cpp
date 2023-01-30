#include <iostream>

using namespace std;

//fungsi pointer digunakan untuk melihat alamat
// cara menggunakannya adalah dengan deklrasarikan tipe data int terus gunakan tanda * baru dah nilainya diisi dengan &


int main(){

	int a = 12;
	int *aPtr = &a;

	cout<<"Nilai dari a = "<<a<<endl;
	cout<<"Alamat dari a = "<<aPtr<<endl;


	//jika ingin membuat alamat atau pointer kosong maka gunakan nullptr;
	int *aPtr = nullptr;
	cout<<"Alamat dari a = "<<aPtr<<endl;


	return 0;
}
