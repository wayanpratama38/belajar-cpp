#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int arraySize=10;

void printArray(array<int,arraySize>angka){
	cout<<"Angka : ";
	for(int a :angka){
		cout<<a<<" ";
	}cout<<endl;
}

void printArray(array<char,arraySize>kata){
	cout<<"Char  : ";
	for(char a :kata){
		cout<<a<<" ";
	}cout<<endl;
}

int main(){
	array<int,arraySize>angka = {9,2,5,1,3,7,0,8,6,4};
	array<char,arraySize>huruf = {'c','j','t','e','w','q','x','z','v','d'};


	cout<<"SEBELUM SORTING"<<endl;
	cout<<endl;
	printArray(angka);
	printArray(huruf);

	cout<<endl;

	//cara sorting menggunakan library dari algorithma
	//sort(namaarray.begin(),namaarray.end())
	cout<<"SETELAH SORTING"<<endl;
	cout<<endl;
	sort(angka.begin(),angka.end());
	printArray(angka);
	sort(huruf.begin(),huruf.end());
	printArray(huruf);

	return 0;
}
