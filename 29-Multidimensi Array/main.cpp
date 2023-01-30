#include <iostream>
#include <array>

using namespace std;

//membuat matriks dengan pointer

void printArray(int *ptrArray,int baris,int kolom){
	int index = 0;
	for(int i =0 ;i<baris;i++){
		cout<<" [ ";
		for(int j=0;j<kolom;j++){
			cout<<*(ptrArray+index)<<" ";
			index++;
		}
		cout<<"]"<<endl;
	}
}




int main(){


	// tipedata nama-array [baris][kolom]={nilai}
	//membuaat array multidimensi
	int arrayMD [2][2]={1,2,3,4};
	//cara akses sama seperti python
	cout<<arrayMD[0][1]<<endl;


	cout<<endl;
	printArray(*arrayMD, 2,2);

	// untuk membuat kita bisa mengubah baris dan kolom
	//gunakan const

	cout<<endl;
	const int baris = 2;
	const int kolom = 2;
	int arrayMD2[baris][kolom]={5,6,7,8};
	printArray(*arrayMD2,baris,kolom);




	return 0;
}
