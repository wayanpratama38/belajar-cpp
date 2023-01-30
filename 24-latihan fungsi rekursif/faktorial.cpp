#include <iostream>

using namespace std;

// fungsi rekursif
int faktorial(int a){
	if (a==1){
		return 1;
	}else{
		return a*faktorial(a-1);
	}
}

int main(){

	cout<<faktorial(5)<<endl;
	return 0;
}