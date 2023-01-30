#include <iostream>

using namespace std;

/*
bisa mempersingkat penggunaan std dengan 
using namespace std; //sehingga tidak perlu pakai std lagi

*/
using namespace std;
int main()
{
	int a; // ini namanya deklarasi kalau a adalah variabel
	//namun isinya masih 0 atau kosong
	//sehingga bisa kita tambahkan nilai a
	a = 10;
	cout<<a<<endl;

	//selain itu kita bisa minta input dari console
	//dengan cin

	int b;
	cout<<"Masukkan nilai b: ";
	cin >> b; // nilai cin ini langsung membuat kita ke line terbaru(newline(\n))
	cout<<"Nilai yang anda masukkan adalah ";
	cout<<b<<endl;
	cin.get();
	return 0;
}