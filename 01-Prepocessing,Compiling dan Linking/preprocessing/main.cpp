#include <iostream>


/*
proses dibalik dari sebuah penciptaan exe dari c++ terdiri dari
proses preprocessing,compiling dan linking

proses preprocessing ini akan menyatukan semua fungsi dan class yang berada
di folder lain ke dalam satu folder yang sama yang nantinya akan di compiling
menjadi bahasa mesin

cara melakukan preprocessing ini dengan menggunakan cmd:
g++ -E nama_file.cpp > nama_file.p

file yang sudah melalui preprocessing akan bisa di compile
dan jika ingin compile maka file harus berisi #include <iostream>

cara compile menggunakan cmd:
g++ -c namafile.cpp

nnti akan adafile baru yang ujungnya .o
bisa diakses dengan objdump namafile.o

setelah itu kita bisa melakukan lingking dari dua file yang berbeda
tapi harus dilakukan compile dulu

cara melakukan linking dengan cmd:
g++ namafile1.o namafile2.o


preprocessing -> compile -> linking = hasil.exe
*/

int fungsi_tambah(int a,int b);

int main(int argc, char const *argv[])
{
	std::cout<<fungsi_tambah(2,3)<<std::endl;
	return 0;
}