#include <iostream>
#include <string>

using namespace std;

//ternary operator itu adalah tanda ?
//strukturnya
//kondisi ? hasil1 : hasil2

int main(){
	string hasil1,hasil2,output;
	int a,b;

	hasil1 = "Benar";
	hasil2 = "Salah";

	a=3;
	cout<<"Masukkan angka = ";
	cin>>b;

	output = (a==b)?hasil1:hasil2;
	cout<<output<<endl;
	return 0;
}
