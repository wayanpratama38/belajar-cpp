#include <iostream>

using namespace std;

int main()
{
	int a = 6;
	int b = 4;

	int hasil;

	//operator aritmatika +,-,*,/,%

	//penjumlahan
	hasil = a+b;
	cout<<a<<" + "<<b<<" = "<<hasil<<endl;

	//pengurangan
	hasil = a-b;
	cout<<a<<" - "<<b<<" = "<<hasil<<endl;

	//perkalian
	hasil = a*b;
	cout<<a<<" x "<<b<<" = "<<hasil<<endl;

	//pembagian
	hasil = a/b;
	cout<<a<<" / "<<b<<" = "<<hasil<<endl;
	//didalam pembagian tempat menyimpan hasil harus float
	//dan salah satu nilai yang akan di bagikan harus float

	//modulus
	hasil = a%b;
	cout<<a<<" % "<<b<<" = "<<hasil<<endl;
	//kedua variabel harus bertipe sama
	//bisa (float dan float) atau (int dan int)

	//prioritas dapat menggunakan tanda kurung
	hasil = (a+b)*a;
	cout<<"("<<a<<" + "<<b<<")"<<" x "<<a<<" = "<<hasil<<endl;


	return 0;
}