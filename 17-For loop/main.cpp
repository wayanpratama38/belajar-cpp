#include <iostream>


using namespace std;

int main()
{
	/*
	for (inisialisasi;loop kondisi;increment){
		aksi
	}

	*/
	cout<<"Awal Loop\n"<<endl;
	for(int counter = 1;counter<=10;counter++){
		cout<<counter<<endl;
	}
	cout<<"\nSelesai Loop"<<endl;

	cout<<"\nLoop 2"<<endl;

	cout<<"Awal Loop\n"<<endl;
	int total=0;
	for(int i = 1;i<=10;i++,total+=i){
		cout<<i<<"||"<<total<<endl;
	}
	cout<<"\nSelesai Loop"<<endl;
	
	return 0;
}
