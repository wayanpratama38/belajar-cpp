#include <iostream>
#include <string>
using namespace std;

int main(){

	//penggunaan comma operator adalah secara berurutan
	//struktur
	//variabel = (ekspresi1,ekspresi2,ekspresi3)
	int a,b,c;

	a = (b=3,c=6,(b+c));
	cout<<a<<endl;

	return 0;
}