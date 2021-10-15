#include <iostream>
using namespace std;
int main()
{
	char nama[50], menu[20], back;
	int jumlah, makanan, makan, total, harga, bayar, saldo, kurang;
	int harga[5]={10000, 5000, 6000}, i=0;
	
	do{
	cout<<" Nama Pemesan : ";
	cin>>nama;
	cout<<"\tMenu Makanan\n";
	cout<<" 1. Nasi Goreng		Rp. 10.000\n";
	cout<<" 2. Ayam Goreng	  Rp. 5.000\n";
	cout<<" 3. Bebek Goreng	 Rp. 6.000\n";
	cout<<" Masukkan pilihan menu anda : ";
	cin>>makanan;
	
	switch (makanan){
		case 1:
			strcpy(menu, " Nasi Goreng\n");
		break;
		case 2:
		strcpy(menu, " Ayam Goreng\n");
		i=1;
		break;
		case 3:
		strcpy(menu, " Bebek Goreng\n");
		i=2;
		break;
	default:
		cout<<" Pilihan menu anda tidak ada dalam daftar!!!";
	break;
	}
		cout<<" Anda memilih "<<menu<<"\n";
		cout<<" Jumlah makanan yang dibeli : ";
		cin>>jumlah;
		
		makan = jumlah * harga[i];
		total = makan;
		cout<<"\t Bon Pembelian\n";
		cout<<" Nama Pemesan     = "<<nama<<"\n";
		cout<<" Menu Makanan      = "<<menu<<"\n";
		cout<<" Jumlah Pesanan    = "<<jumlah<<" porsi"<<"\n";
		cout<<" Harga Makanan     = "<<harga[i]<<"*"<<jumlah<<"\n";
		cout<<" Total Pembayaran = "<<total<<"\n";
		
		cout<<" Silahkan bayar di sini : Rp. \n";
		
		while(saldo == bayar < total){
			cout<<" Saldo anda kurang, silahkan bayar : Rp. ";			cin>>kurang;
			bayar+=kurang;
			};
		cout<<" Klik Y untuk kembali ke menu awal : ";
		cin>>back;
	}while(back=='Y' || back=='y');
}