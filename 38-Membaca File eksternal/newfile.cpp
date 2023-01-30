#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

	ifstream myFile;
	string output,buffer;
	bool isData=true;



	while(!isData){
		myFile.open("Dataa.txt");
		getline(myFile,buffer);
		output.append("\n"+buffer);
		if (buffer == "Data"){
			isData = true;
		}
	}


	myFile.close();

	return 0;
}
