//title :
//Description :
//tags :

#include <iostream>

using namespace std;

int main()
{
	//buatlah program input nilai mapel kelas 9
	int tugas1, tugas2 ;
	string nama, kelas, mapel;
	double nilai;
	
	cout<<"Selamat datang di program rata-rata nilai\n\n";
	cout<<" Masukkan Nama : ";
	cin>>nama;
	cout <<" Kelas : ";
	cin>>kelas;
	cout<<" Mata Pelajaran : ";
	cin>>mapel;
	cout<<" Masukkan nilai 1: ";
	cin>>tugas1;
	cout<<" Masukkan nilai 2 : ";
	cin>>tugas2;
	
	nilai = tugas1 + tugas2;
	nilai = nilai/2;
	
	cout<<" Nama : "<<nama<<"\n";
	cout<<" Kelas : "<<kelas<<"\n";
	cout<<" Mata Pelajaran : "<<mapel<<"\n";
	cout<<" Nilai rata-rata anda : "<<nilai;

}