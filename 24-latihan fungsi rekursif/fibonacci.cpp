#include <iostream>

using namespace std;

// fungsi fibonacci
int fibo(int a){
	if ((a==0)||(a==1)){
		return a;
	}else{
		return fibo(a-1)+fibo(a-2);
	}
}



int main(){
	cout<<fibo(6)<<endl;

	return 0;
}