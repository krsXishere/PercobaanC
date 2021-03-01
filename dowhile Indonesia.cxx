#include <iostream>
using namespace std;
int main()
{
	char loop;
	string nama, umur;
	
	do{
	
	cout<<" Nama : "; cin>>nama;
	cout<<" Umur : "; cin>>umur;
	cout<<" Nama saya adalah "<<nama<<"\n";
	cout<<" Umur saya adalah "<<umur<<"\n";
	cout<<" Kembali ke menu awal? Y untuk Yes : "; cin>>loop;
	} while (loop=='y' | loop=='Y');
	
	return 0;
}