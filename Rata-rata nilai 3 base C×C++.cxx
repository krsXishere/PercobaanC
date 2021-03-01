#include <iostream>

using namespace std;

int main()
{
	int tugas1, tugas2, tugas3;
	string nama, mapel, kelas;
	double nilai;
	
	printf(" Masukkan Nama anda : ");
	cin>>nama;
	printf(" Masukkan Kelas : ");
	cin>>kelas;
	printf(" Mata Pelajaran : ");
	cin>>mapel;
	printf(" Masukkan Nilai 1 : ");
	cin>>tugas1;
	printf(" Masukkan Nilai 2 : ");
	cin>>tugas2;
	printf(" Masukkan Nilai 3 : ");
	cin>>tugas3;
	
	nilai = tugas1 + tugas2 + tugas3;
	nilai = nilai/3;
	
	cout<<" Nama : "<<nama<<"\n";
	cout<<" Kelas : "<<kelas<<"\n";
	cout<<" Mapel : "<<mapel<<"\n";
	cout<<" Nilai rata-rata anda : "<<nilai<<"\n";
	
	return 0;
	
}
	