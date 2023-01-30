#include <iostream>

using namespace std;

//basic function
int luas_kotak(int p,int l){
	return p*l;
}

//overloading function
int luas_kotak(int p){
	return p*p;
}

// overload bisa juga klau tipedatanya dirubah yang penting nama dari fungsinya sama

double luas_kotak(double p){
	return p*p;
}





int main(){

	cout<<"Luas Kotak 2x4 : "<<luas_kotak(2,4)<<endl;
	cout<<"Luas Kotak 2x2 : "<<luas_kotak(2)<<endl;
	cout<<"Luas Kotak 2.3x2.3 : "<<luas_kotak(2.3)<<endl;

	return 0;
}
