#include <iostream>

using namespace std;

int main()
{
	string nama, kelas;
	char loop;
	
	do{
	cout<<" Nama : ";
	cin>>nama;
	cout<<" Kelas : ";
	cin>>kelas;
	
	cout<<" Nama saya "<<nama<<"\n";
	cout<<" Saya dari kelas "<<kelas<<"\n\n";
	cout<<" Kembali ke opsi awal? [Y/N] : ";
	cin>>loop;
	}while(loop=='Y' | loop=='y');
	system ("color 74");
	cout<<" PROGRAM DIAKHIRI";
	
	return 0;
	
}