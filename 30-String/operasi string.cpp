#include <iostream>
#include <string>

using namespace std;


int main(){
	
	// stringnya
	string kata("snack");


	//menampilkan string
	cout<<kata<<endl;

	cout<<endl;

	//menampilkan karakter pada index tertentu pada string
	cout<<"Karakter pada index 0 - "<<kata[0]<<endl;
	cout<<"Karakter pada index 1 - "<<kata[1]<<endl;
	cout<<"Karakter pada index 2 - "<<kata[2]<<endl;
	cout<<"Karakter pada index 3 - "<<kata[3]<<endl;
	cout<<"Karakter pada index 4 - "<<kata[4]<<endl;

	cout<<endl;

	//merubah karakter pada index tertentu
	kata[2]='e';
	cout<<kata<<endl;

	cout<<endl;
			
	//menyambungkan kata, concatenation
	//cara 1
	string kata2(kata+'e');
	cout<<kata2<<endl;


	cout<<endl;


	//cara 2
	string kata3(" akuuh!");
	kata2.append(kata3);
	cout<<kata2<<endl;


	cout<<endl;

	
	//cara 3
	string kata4(" umaai!");
	kata2+=kata4;
	cout<<kata2<<endl;	





	return 0;
}