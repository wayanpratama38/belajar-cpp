#include <iostream>
#include <array>
using namespace std;

const int kolom=3;
const int baris=2;

void printArray(array<array<int,kolom>,baris> namaArray){
	for(array<int,kolom> vectorbaris : namaArray){
		cout<<"[ ";
		for(int nilaikolom : vectorbaris){
			cout<< nilaikolom <<" ";
		}
		cout<<"]"<<endl;
	}
}


int main(){


	//cara membuat array dengan std library
	array<array<int,kolom>,baris> arrayMD = {0,1,2,3,4,5};

	//cara akses sama saja seperti biaasa
	cout<<arrayMD[0][0]<<" ";
	cout<<arrayMD[0][1]<<" ";
	cout<<arrayMD[0][2]<<" "<<endl;

	cout<<arrayMD[1][0]<<" ";
	cout<<arrayMD[1][1]<<" ";
	cout<<arrayMD[1][2]<<" "<<endl;


	printArray(arrayMD);
	return 0;
}