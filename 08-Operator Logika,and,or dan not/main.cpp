#include <iostream>


using namespace std;

int main()
{
	int a = 3;
	int b = 2;

	bool hasil;

	// operator logika : not,and,or

	// not : !
	hasil =!(a==3); //merubah dari true ke false (vice-versa)

	// and
	cout<<"ini untuk operator and \n";
	hasil = (a==3)and(b==2); // true and true
	cout<<hasil<<endl;
	hasil = (a==4)and(b==2); // false and true
	cout<<hasil<<endl;
	hasil = (a==3)&&(b==1); // true and false
	cout<<hasil<<endl;
	hasil = (a==4)&&(b==1); // false and false
	cout<<hasil<<endl;

	//or
	cout<<"ini untuk operator or \n";
	hasil = (a==3)or(b==2); // true and true
	cout<<hasil<<endl;
	hasil = (a==4)or(b==2); // false and true
	cout<<hasil<<endl;
	hasil = (a==3)||(b==1); // true and false
	cout<<hasil<<endl;
	hasil = (a==4)||(b==1); // false and false
	cout<<hasil<<endl;
	return 0;
}
