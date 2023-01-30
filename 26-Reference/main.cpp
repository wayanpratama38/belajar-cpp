#include <iostream>

using namespace std;

int main()
{
	
	int a = 10;

	//pointer
	cout<<" nilai dari a "<<a<<endl;
	cout<<"alamat dari a "<<&a<<endl<<endl;

	//reference
	int &b = a;
	cout<<" nilai dari b "<<b<<endl;
	cout<<"alamat dari b "<<&b<<endl;


	return 0;
}