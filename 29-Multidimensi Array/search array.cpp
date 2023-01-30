#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int arraySize=10;
void printArray(array<int,arraySize>angka){
	cout<<"Angka : ";
	for(int i : angka){
		cout<<i<<" ";
	}cout<<endl;
}

int main(){

	array<int,arraySize>angka={0,9,1,6,3,2,7,5,4,8};
	printArray(angka);

	//cara mencari angka tertentu adalah
	//dengan sort dulu baru binary_search
	int Cariangka;
	bool ketemu;

	cout<<"Masukkan angka yang ingin di cari : ";
	cin>>Cariangka;

	sort(angka.begin(),angka.end());
	ketemu = binary_search(angka.begin(),angka.end(),Cariangka);

	if  (ketemu){
		cout<<"KETEMU!"<<endl;
	}else{
		cout<<"TIDAK KETEMU!"<<endl;
	}

	return 0;
}
