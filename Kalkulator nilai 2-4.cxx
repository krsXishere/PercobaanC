#include <iostream>

using namespace std;

int main()
{
	int pilihan, nilai1, nilai2, nilai3, nilai4;
	string penjumlahan, pengurangan;
	double nilai;
	char pilihan2;
	
		cout<<" 1. Penjumlahan\n";
		cout<<" 2. Pengurangan\n";
		cout<<" 3. Perkalian\n";
		cout<<" 4. Pembagian\n";
		cout<<" Pilih opsi 1, 2, 3, 4 : ";
		cin>>pilihan;
	
		if(pilihan==1)
		{
			cout<<" 1. Penjumlahan 2 nilai\n";
			cout<<" 2. Penjumlahan 3 nilai\n";
			cout<<" 3. Penjumlahan 4 nilai\n";
			cout<<" Pilih opsi 1-3 : ";
			cin>>pilihan2;
		
			if(pilihan2=='1') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 + nilai2;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
	
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 + nilai2 + nilai3;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 + nilai2 + nilai3 + nilai4;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
		}else {
			cout<<" Input yang anda masukkan salah!!!";
		}
	}else if(pilihan==2)
	{
		cout<<" 1. Pengurangan 2 nilai\n";
		cout<<" 2. Pengurangan 3 nilai\n";
		cout<<" 3. Pengurangan 4 nilai\n";
		cout<<" Pilih opsi 1-3 : ";
		cin>>pilihan2;
		
			if(pilihan2=='1') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 - nilai2;
				cout<<" Hasil dari pengurangan adalah : "<<nilai<<"\n";
	
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 - nilai2 - nilai3;
				cout<<" Hasil dari pengurangan adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai2 : ";
				cin>>nilai2;
				cout<<" Nilai3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 - nilai2 - nilai3 - nilai4;
				cout<<" Hasil dari pengurangan adalah : "<<nilai<<"\n";
		
				}else {
					cout<<" Input yang anda masukkan salah!!!";
				}
			}
			
		if(pilihan==3)
		{
			cout<<" 1. Perkalian 2 nilai\n";
			cout<<" 2. Perkalian 3 nilai\n";
			cout<<" 3. Perkalian 4 nilai\n";
			cout<<" Pilih opsi 1-3 : ";
			cin>>pilihan2;
		
			if(pilihan2=='1') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 * nilai2;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 * nilai2 * nilai3;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 * nilai2 * nilai3 * nilai4;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
					}else {
						cout<<" Input yang anda masukkan salah";
					}
		}else if(pilihan==4)
		{
			cout<<" 1. Pembagian 2 nilai\n";
			cout<<" 2. Pembagian 3 nilai\n";
			cout<<" 3. Pembagian 4 nilai\n";
			cout<<" Pilih opsi 1-3 : ";
			cin>>pilihan2;
		
			if(pilihan2=='1') {
				cin>>pilihan2;
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 / nilai2;
				cout<<" Hasil dari pembagian adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 / nilai2 / nilai3;
				cout<<" Hasil dari pembagian adalah : "<<nilai<<"\n";
			
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 / nilai2 / nilai3 / nilai4;
				cout<<" Hasil dari pembagian adalah : "<<nilai<<"\n";
				}else {
					cout<<" Input yang anda masukkan salah!!!";
				}
			}
	
			return 0;
	
}