#include <iostream>
using namespace std;
int main()
{
	char loop, pilihan1, pilihan2;
	long angka1, angka2, angka3, nilai;
	
	do {
	cout<<"\t\t Percabangan Bersarang\n";
	cout<<" Pilih opsi di bawah ini : \n";
	cout<<" 1. Penjumlahan\n";
	cout<<" 2. Pengurangan\n";
	cout<<" Pilihan : ";
	cin>>pilihan1;
	
	if (pilihan1=='1') {
		cout<<" Kamu memilih opsi 1\n";
		cout<<" Pilih opsi di bawah ini : \n";
		cout<<" 1. Penjumlahan 2 nilai\n";
		cout<<" 2. Penjumlahan 3 nilai\n";
		cout<<" Pilih : ";
		cin>>pilihan2;
		if (pilihan2=='1') {
			cout<<"\t\t Penjumlahan 2 nilai\n";
			cout<<" Masukkan nilai 1 : ";
			cin>>angka1;
			cout<<" Masukkan nilai 2 : ";
			cin>>angka2;
			nilai = angka1 + angka2;
			cout<<" Maka hasil dari penjumlahan "<<angka1<<" + "<<angka2<<" = "<<nilai<<"\n";
		} else if (pilihan2=='2') {
			cout<<"\t\t Penjumlahan 3 nilai\n";
			cout<<" Masukkan nilai 1 : ";
			cin>>angka1;
			cout<<" Masukkan nilai 2 : ";
			cin>>angka2;
			cout<<" Masukkan nilai 3 : ";
			cin>>angka3;
			nilai = angka1 + angka2 + angka3;
			cout<<" Maka hasil dari penjumlahan "<<angka1<<" + "<<angka2<<" + "<<angka3<<" = "<<nilai<<"\n";
		} else {
			cout<<" Input kamu salah !!!";
		}
	} else if (pilihan1=='2') {
		cout<<" Kamu memilih opsi 2\n";
		cout<<" Pilih opsi di bawah ini : \n";
		cout<<" 1. Pengurangan 2 nilai\n";
		cout<<" 2. Pengurangan 3 nilai\n";
		cout<<" Pilih : ";
		cin>>pilihan2;
		if (pilihan2=='1') {
			cout<<"\t\t Pengurangan 2 nilai\n";
			cout<<" Masukkan nilai 1 : ";
			cin>>angka1;
			cout<<" Masukkan nilai 2 : ";
			cin>>angka2;
			nilai = angka1 - angka2;
			cout<<" Maka hasil dari penjumlahan "<<angka1<<" - "<<angka2<<" = "<<nilai<<"\n";
		} else if (pilihan2=='2') {
			cout<<"\t\t Pengurangan 3 nilai\n";
			cout<<" Masukkan nilai 1 : ";
			cin>>angka1;
			cout<<" Masukkan nilai 2 : ";
			cin>>angka2;
			cout<<" Masukkan nilai 3 : ";
			cin>>angka3;
			nilai = angka1 - angka2 - angka3;
			cout<<" Maka hasil dari penjumlahan "<<angka1<<" - "<<angka2<<" - "<<angka3<<" = "<<nilai<<"\n";
		} else {
			cout<<" Input kamu salah !!!";
		}
	} else {
		cout<<" Input kamu salah !!!";
	}
	cout<<" Kembali ke opsi awal?\n";
	cout<<" Ketik Y/y untuk kembali ke opsi awal : ";
	cin>>loop;
	} while (loop=='Y' | loop=='y');
	
	return 0;
	
	
}