#include <iostream>
using namespace std;
int main()
{
	char loop, p1, p2;
	int a1, a2, a3, nilai;
	
	cout<<"\t\t Percabangan Bersarang\n";
	do {
		
	cout<<" Pilih opsi di bawah ini : \n";
	cout<<" 1. Penjunlahan\n";
	cout<<" 2. Pengurangan\n";
	cout<<" Pilih : ";
	cin>>p1;
	
	if (p1=='1') {
		cout<<"\t\t Penjumlahan\n";
		cout<<" Pilih opsi di bawah : \n";
		cout<<" 1. Penjumlahan 2 nilai\n";
		cout<<" 2. Penjumlahan 3 nilai\n";
		cout<<" Pilih : ";
		cin>>p2;
		
		if (p2=='1') {
			cout<<"\t Penjumlahan 2 Nilai\n";
			cout<<" Masukkan nilai 1 : ";
			cin>>a1;
			cout<<" Masukkan nilai 2 : ";
			cin>>a2;
			nilai = a1 + a2;
			cout<<" Hasilnya adalah "<<a1<<" + "<<a2<<" = "<<nilai<<"\n";
		} else if (p2=='2') {
			cout<<"\t Penjumlahan 3 Nilai\n";
			cout<<" Masukkan nilai 1 : ";
			cin>>a1;
			cout<<" Masukkan nilai 2 : ";
			cin>>a2;
			cout<<" Masukksn nilai 3 : ";
			cin>>a3;
			nilai = a1 + a2 + a3;
			cout<<" Hasilnya adalah "<<a1<<" + "<<a2<<" + "<<a3<<" = "<<nilai<<"\n";
		} else {
			cout<<" Input Kamu salah !!!";
		}
	} else if (p1=='2') {
		cout<<"\t\t Pengurangan\n";
		cout<<" Pilih opsi di bawah ini : \n";
		cout<<" 1. Pengurangan 2 nilai\n";
		cout<<" 2. Pengurangan 3 nilai\n";
		cout<<" Pilih : ";
		cin>>p2;
			if (p2=='1') {
				cout<<"\t Pengurangan 2 Nilai\n";
				cout<<" Masukkan nilai 1 : ";
				cin>>a1;
				cout<<" Masukkan nilai 2 : ";
				cin>>a2;
				nilai = a1 - a2;
				cout<<" Hasilnya adalah "<<a1<<" - "<<a2<<" = "<<nilai<<"\n";
			} else if (p2=='2') {
				cout<<"\t Pengurangan 3 Nilai\n";
				cout<<" Masukkan nilai 1 : ";
				cin>>a1;
				cout<<" Masukkan nilai 2 : ";
				cin>>a2;
				cout<<" Masukkan nilai 3 : ";
				cin>>a3;
				nilai = a1 - a2 - a3;
				cout<<" Hasilnya adalah "<<a1<<" - "<<a2<<" - "<<a3<<" = "<<nilai<<"\n";
			} else {
				cout<<" Input Kamu salah";
			}
	} else {
		cout<<" Input Kamu salah !!!";
	}
	cout<<" Kembali ke opsi awal?\n";
	cout<<" Ketik Y/y lalu enter : ";
	cin>>loop;
	} while (loop=='Y' | loop=='y');
	cout<<"\n\t\t PROGRAM DIAKHIRI";
	
	return 0;
}