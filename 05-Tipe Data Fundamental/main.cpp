#include <iostream>

using namespace std;

#include <numeric>

int main(){

    // bilangan bulat
	int a = 1; //4-byte 32-bit 
	long b =3; //8-byte 64-bit
	short c =4; //2-byte 16-bit

	// bilangan decimal
	float d = 1.0; //4-byte 32-bit
	double e = 2.5; //8-byte 64-bit

	// karakter
	char f = 'u'; //1 bit

	// boolean
	bool g = true;//1 byte

	cout << g << endl;
	cout << sizeof(g) << " byte"<< endl;

	cin.get();
	return 0;
}